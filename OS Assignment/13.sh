# Program Number: 13
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
echo Enter the number:
read number
for i in {1..15}
do
echo "$number * $i = `expr $number \* $i`"
done
