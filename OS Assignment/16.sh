# Program Number: 16
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash

awk '{print $0}' employee.txt


awk '/pattern/ {print $0}' employee.txt


awk '{print $1}' employee.txt



awk 'BEGIN {print "Name\t Designation\t Department\t Salary";}
{print $2,"\t",$3, "\t", $4, "\t", $5, "\t";}
END {print "Report Generated\n"}' employee.txt


echo "ID >200"
awk '$1 > 200' employee.txt


echo "People List"
awk '/Technology/' employee.txt


echo "Number"
awk '/Technology/' employee.txt | wc -l