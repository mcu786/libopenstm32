##
## This file is part of the libopencm3 project.
##
## Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.
##

LIBNAME		= libopencm3_stm32

# PREFIX	?= arm-none-eabi
PREFIX		?= arm-elf
CC		= $(PREFIX)-gcc
AR		= $(PREFIX)-ar
CFLAGS		= -Os -g -Wall -Wextra -I../../include -fno-common \
		  -mcpu=cortex-m3 -mthumb -Wstrict-prototypes \
		  -ffunction-sections -fdata-sections
# ARFLAGS	= rcsv
ARFLAGS		= rcs
OBJS		= vector.o rcc.o gpio.o usart.o adc.o spi.o flash.o nvic.o \
		  rtc.o i2c.o dma.o systick.o exti.o scb.o ethernet.o \
		  usb_f103.o usb.o usb_control.o usb_standard.o can.o

VPATH += ../usb

# Be silent per default, but 'make V=1' will show all compiler calls.
ifneq ($(V),1)
Q := @
endif

all: $(LIBNAME).a

$(LIBNAME).a: $(OBJS)
	@printf "  AR      $(subst $(shell pwd)/,,$(@))\n"
	$(Q)$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	@printf "  CC      $(subst $(shell pwd)/,,$(@))\n"
	$(Q)$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@printf "  CLEAN   lib/stm32\n"
	$(Q)rm -f *.o
	$(Q)rm -f $(LIBNAME).a

.PHONY: clean

