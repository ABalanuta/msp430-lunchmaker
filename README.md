# msp430-lunchmaker

## Dependencies:

###Arch Linux:
	
	mspdebug
	msp430-elf-gcc
	msp430-elf-mcu

######To connect to the Launchpad as unpriviledged user.
	
	Simply create a new file /etc/udev/rules.d/10-msp430.rules with content:
	
	ATTRS{idVendor}=="0451", ATTRS{idProduct}=="f432", MODE="0660", GROUP="users"
	Make sure you are in the power group, or specify a different one.
	Udev, now being part of systemd, will automatically apply the rule when you re-plug the device.
	The idProduct can be "f432" depending on your lounchboard revision, check with dmesg to be sure.
