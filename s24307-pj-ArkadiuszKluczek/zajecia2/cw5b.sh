#!/bin/bash
x="HOP SOP HOP SOP ";
SOP="\e[32mSOP\e[0m"
echo -e "Pierwszy znak: ${x:0:1}";
echo -e "Ostatni znak: ${x: -1}";
echo -e ${x//SOP/$SOP};
