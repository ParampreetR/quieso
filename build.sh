#!/bin/sh

gcc quieso.c -l pthread -l ncurses -o bin/quieso_x64 # For 64 bit version
gcc quieso.c -l pthread -l ncurses -o bin/quieso_x32 -m32 # For 32 bit version
echo "Your binaries are in bin folder"
