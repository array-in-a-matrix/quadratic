ARG_A=$(whiptail --inputbox "Please enter the value for \"a\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "a =" $ARG_A
else
echo "User canceled input."
fi

ARG_B=$(whiptail --inputbox "Please enter the value for \"b\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "b =" $ARG_B
else
echo "User canceled input."
fi

ARG_C=$(whiptail --inputbox "Please enter the value for \"C\":" 10 50 --title "Quadratic Calculator" 3>&1 1>&2 2>&3)
                                                                        
exitstatus=$?
if [ $exitstatus = 0 ]; then
echo "c =" $ARG_C
else
echo "User canceled input."
fi
