# Platform name msp430g2553, msp430g2453
PLATFORM = msp430g2553

# Target file name (without extension).
TARGET = main

#ROOT_DIR = 

SRC = $(TARGET).c
DST = $(TARGET).elf


load:
	mspdebug rf2500 "prog $(DST)"

compile:
	msp430-elf-gcc -g -O0 -mmcu=$(PLATFORM) $(SRC) -o $(DST)

clean:
	rm $(DST)
