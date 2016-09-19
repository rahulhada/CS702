#!/bin/sh
#Script to run all the programs from the commandline without the
#user having to compile it

#Display inputs to the user
iOps=100
#Loop until user wants to exit
while [ "$iOps" -gt 0 ]
do

#Header "Library Name"
echo "------------------------------"
echo "     CrypToFrameWork"
echo "------------------------------"

#Display option to the user
echo " "
echo "[ 1]. GCD"
echo "[-2]. Exit"
echo " "

read -p "Please select any one operation: " iOps
    case $iOps in
        1*) echo "Input recieved $iOps";
            echo "";
            echo "Performing GCD";
            gcc gcd.c first.c -o test;
            ./test;;
        -2*)exit;;
         *) echo "Please enter a valid input";exit;;
    esac

done


