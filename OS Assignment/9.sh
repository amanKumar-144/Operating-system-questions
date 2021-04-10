# Program Number: 9
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
echo "enter the filename"
read fname
echo "enter the starting line number"
read s
echo "enter the ending line number"
read n

sed -n $s,$n\p $fname | cat > newline

cat newline