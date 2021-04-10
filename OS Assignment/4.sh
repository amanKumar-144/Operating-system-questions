# Program Number: 4
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
echo "Enter Fame you want to delete \c"
read f1
echo "Enter the Recycle path \c"
read f2
if [ -f $f1 ]
then
    if [ -d $f2 ]
    then
        mv $f1 $f2
    fi
else
    echo "$f1 does not exist"
    echo "Can't delete"
fi

