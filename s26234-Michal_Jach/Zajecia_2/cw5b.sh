#!/bin/bash
A=$1
echo "Pierwszy znak z argumentu to: "${A:0:1}
echo "Ostatni znak z argumentu to: "${A: -1}
echo -e $A | sed s/SOP/`echo -e "\e[32mSOP\e[0m"`/g
