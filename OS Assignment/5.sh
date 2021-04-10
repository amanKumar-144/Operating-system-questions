# Program Number: 5
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
read file
if [ -f $file ]
then
    echo "file is present"
else
    echo "file is not present"
fi