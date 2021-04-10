# Program Number: 15
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
sed -n '/erors/p' example.txt
echo "\n"
sed -n '/erors/!p' example.txt
echo "\n"
sed -n '/^This.*errors.$/p' example.txt
echo "\n"
sed -n '4,$p' example.txt
echo "\n"
sed 's/erors/errors/g' example.txt
echo "\n"
sed 's/^/> /' example.txt
echo "\n"
sed 's/$/EOL/' example.txt