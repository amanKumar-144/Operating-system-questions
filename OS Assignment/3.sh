# Program Number: 3
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
if [ $# -eq 0 ] 
then
    echo "Pass atleast one argument"
else
    
    while (( "$#" )); do 
        touch $1.txt
        shift 
    done
fi