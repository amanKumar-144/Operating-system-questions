# Program Number: 6
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
PS3='Please enter your choice: '
options=("ls" "pwd" "who" "exit")
select opt in "${options[@]}"
do
    case $opt in
        "ls")
            echo "you chose ls"
            ls
            ;;
        "pwd")
            echo "you chose pwd"
            pwd
            ;;
        "who")
            echo "you chose choice $REPLY which is $opt"
            who
            ;;
        "exit")
            break
            ;;
        *) echo "invalid option $REPLY";;
    esac
done