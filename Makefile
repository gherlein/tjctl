#
# Makefile for Tigerjet Network TJ560 userspace control utility.
#
CFLAGS=-Wall -pedantic

tjctl: tjctl.o
	gcc -o tjctl tjctl.o -lusb

clean:
	rm -f tjctl.o tjctl

tjctl.o: tjctl.c proslic.h tjusb.h
