#!/bin/bash

# Start DWM Blocks
dwmblocks & 

# Startup all the other stuff
~/.fehbg &
killall picom; picom &
killall dunst; dunst &
xfce4-clipman &

