# Program Number: 2
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash

if [ $# -eq 3 ] 
then
    while (( "$#" )); 
    do 
        echo $1 
        shift 
    done
else
    echo "Pass 3 arguments...We don't have 3 arguments"
fi