# Program Number: 7
# Student Name: Aman; Register Number: IMT2018006
# Date:12th Jan 2020
# Description: This program will implement cp command using file system
# related system calls.
#!/bin/bash
while true
do
    echo "Given Options"
    echo "
        1. List of files.
        2. Copying files.
        3. Removing files.
        4. Renaming files.
        5. Linking files.
        press [CTRL+C] TO EXIT the Terminal"
    echo "Enter your choice--->(1,2,3,4,5,Ctrl+C"
    read ch
    case "$ch" in
    1 ) echo "The list of all files"
        ls -l || echo "These are file";;
    2) echo "Enter the old filename:"
        read ofile
        echo "Enter the new filename:"
        read nfile
        cp $ofile $nfile && echo "Copied sucessfully." || echo "Copied is not possible." ;;
    3 ) echo "Enter the filename to remove."
        read rfile
        rm -f $rfile && echo "Successfully removed." ;;
    4 ) echo "Enter the old filename."
        read ofile
        echo "Enter the new filename."
        read nfile
    mv $ofile $nfile && echo "The file $ofile name renamed to $nfile." || echo "You cannot Rename the file.".;;
    5 ) echo "Enter the original filename."
        read ofile
        echo "Enter the new filename to link a file."
        read lfile
        ln $ofile $lfile && echo "Creat the linking file Sccessfully." || echo "You cannot Linking the file.";; * )
echo "Invalid option."
echo " Enter correct choice."
esac
done