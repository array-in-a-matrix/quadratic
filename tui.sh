#!/bin/sh
ARG_A=$(whiptail --inputbox "Please enter the value for \"a\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "a =" $ARG_A
else
echo "User canceled input."
exit
fi

ARG_B=$(whiptail --inputbox "Please enter the value for \"b\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "b =" $ARG_B
else
echo "User canceled input."
exit
fi

ARG_C=$(whiptail --inputbox "Please enter the value for \"c\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "c =" $ARG_C
else
echo "User canceled input."
exit
fi

echo

./quadratic $ARG_A $ARG_B $ARG_C