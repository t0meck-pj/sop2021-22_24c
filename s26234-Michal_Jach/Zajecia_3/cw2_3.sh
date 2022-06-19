#!/bin/bash

lista=`ls | wc -l`

for ((i = 1; i < $lista+1; i++)); do 
   echo "Patrzcie Państwo, oto plik:" `ls | sed -n ${i}p`
done
