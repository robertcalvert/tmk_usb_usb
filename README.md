# USB to USB keymaps (TMK)

Custom keymaps for the TMK USB to USB keyboard protocol converter

### Hardware requirement

Arduino Leonardo and USB Host Shield   
    http://arduino.cc/en/Main/ArduinoBoardLeonardo   
    http://arduino.cc/en/Main/ArduinoUSBHostShield
    
### Build firmware

Copy these files into the [TMK usb_usb folder] and run this command

$ make KEYMAP=rob

### Program converter

Push reset button on Leonardo before runing this command

$ ./leonardo_flash

---

## License

Copyright (c) 2015 Robert Calvert ([robert.calvert.io])

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

[TMK usb_usb folder]:https://github.com/tmk/tmk_keyboard/tree/master/converter/usb_usb
[robert.calvert.io]:http://robert.calvert.io
