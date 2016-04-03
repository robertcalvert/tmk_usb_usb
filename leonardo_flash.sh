#!/bin/bash

# Copyright 2015 Robert Calvert <robert.calvert.io>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

if (( $EUID != 0 )); then
	sudo "$0" "$@"
	exit $?
fi

if [[ -z "$1" ]]; then
	DEV=$(ls -c /dev/*ttyACM*)
else
	DEV=/dev/ttyACM"$1"
fi

BIN=/usr/share/arduino/hardware/tools/avrdude
CONF=/usr/share/arduino/hardware/tools/avrdude.conf

sudo ./leonardo_reset.py "$DEV" && sleep 3
sudo "$BIN" -C"$CONF" -patmega32u4 -cavr109 -P/"$DEV" -b57600 -D -Uflash:w:usb_usb.hex:i -vvvv

exit
