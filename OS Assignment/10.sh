# Program Number: 10
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
dir="/home"
if [ "$#" -ne 2 ]; then
echo "Check Again"

else
    if [ -f ${dir}/$2.tar.gz ];then
        echo "The file already exists"
    else
        echo "Here"
        sudo tar cfz "${dir}/$2.tar.gz" $1
    fi
fi


