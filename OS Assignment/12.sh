# Program Number: 12
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
read var
case $var in
    IIT)
        echo "NIT"
        ;;
    NIT)
        echo "IIT"
        ;;
    *)
        echo "STDERR"
        ;;
esac