#!/bin/bash
A=$1
echo "Pierwszy znak z argumentu to: "${A:0:1}
echo "Ostatni znak z argumentu to: "${A:A-1:1}
echo -e ${A/SOP/\e[32mSOP\e[0m}
echo ${#A}




