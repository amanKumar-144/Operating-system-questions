# Program Number: 1
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/sh

file=`(ls -Rl /dev | grep ^b | wc -l)`
echo "$file"