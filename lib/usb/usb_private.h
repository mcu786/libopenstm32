/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Gareth McMullin <gareth@blacksphere.co.nz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __USB_PRIVATE_H
#define __USB_PRIVATE_H

#define MAX_USER_CONTROL_CALLBACK	4

#define MIN(a, b) ((a)<(b) ? (a) : (b))

/** Internal collection of device information. */
extern struct _usbd_device {
	const struct usb_device_descriptor *desc;
	const struct usb_config_descriptor *config;
	const char **strings;

	u8 *ctrl_buf;  /**< Internal buffer used for control transfers */
	u16 ctrl_buf_len;

	u8 current_address;
	u8 current_config;

	u16 pm_top;    /**< Top of allocated endpoint buffer memory */

	/* User callback functions for various USB events */
	void (*user_callback_reset)(void);
	void (*user_callback_suspend)(void);
	void (*user_callback_resume)(void);

	struct user_control_callback {
		usbd_control_callback cb;
		u8 type;
		u8 type_mask;
	} user_control_callback[MAX_USER_CONTROL_CALLBACK];

	void (*user_callback_ctr[8][3])(u8 ea);

	/* User callback function for some standard USB function hooks */
	void (*user_callback_set_config)(u16 wValue);
} _usbd_device;

enum _usbd_transaction {
	USB_TRANSACTION_IN,
	USB_TRANSACTION_OUT,
	USB_TRANSACTION_SETUP,
};

void _usbd_control_in(u8 ea);
void _usbd_control_out(u8 ea);
void _usbd_control_setup(u8 ea);

int _usbd_standard_request(struct usb_setup_data *req, u8 **buf, u16 *len);

void _usbd_reset(void);

/* Functions provided by the hardware abstraction. */
void _usbd_hw_init(void);
void _usbd_hw_set_address(u8 addr);
void _usbd_hw_endpoints_reset(void);

#endif
