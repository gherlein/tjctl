# tjctl - A linux userspace driver for a very old device

This utility was originally written by Jonathan McDowell <noodles [at] earth.li> and is
largely based on the tjusb kernel driver which seems to have vanished from the Internet.

## Why?

Why not?  OK, seriously.  My day job is doing telephony again so I rummaged around in my
basement and found two devices that I bought from Mark Spencer of Digium about a million
years ago.  They are basic USB to analog phone devices.  How cool would it be if I could make them
work with a modern service?

## State of the Code - BROKEN

As of today, this code is exactly as I grabbed it from the zip file.  I am 100% sure it
will require a huge amount of modernization.  

## Goals

Who knows?  But I can definitely envision plugging a vanilla phone into this, plugging it into
a linux PC, and somehow making a real telephone call with it all these years later.

It won't be boring!

## Board Photos

![bottom](https://github.com/gherlein/tjctl/blob/master/images/IMG_2563.jpg | width=50)


![top](https://github.com/gherlein/tjctl/blob/master/images/IMG_2566.jpg | width=50)


## Data Sheets

* [Tiger560](https://github.com/gherlein/tjctl/blob/master/TIGER560_ETC.pdf)
* [Si3210 SLIC](https://github.com/gherlein/tjctl/blob/master/Si3210-SiliconLaboratories.pdf)

## Credits

Jonathan McDowell <noodles [at] earth.li> did all the core work on this back in the day.

## Original README

This is a simple utility to configure and tweak a TigerJet 560 based USB
to FXS device.

It's intended to be used in conjuction with the in kernel USB audio
driver; load the "audio" module and it will create a /dev oss style
device node (/dev/dsp1 for me as I have a normal soundcard on /dev/dsp).
You then need to do:

tjctl init

to initialise the device.

Once that's done you can call:

tjctl gethook

to determine if the phone is on or off hook.

tjctl ring

will make the phone ring (it stops once picked up, or "tjctl noring"
will stop it).

