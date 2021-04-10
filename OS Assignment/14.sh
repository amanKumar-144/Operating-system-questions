# Program Number: 14
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
h=`date +%H`

#12 0 clock
if [ $h -lt 12 ]; then
  echo Good morning

#6 o clock
elif [ $h -lt 18 ]; then
  echo Good afternoon

#Else evening
else
  echo Good evening
fi