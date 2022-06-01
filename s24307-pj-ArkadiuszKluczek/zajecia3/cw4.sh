#!/bin/bash
$x=$(ls -p | grep -cv /)

if [ $x -gt "5" ]; then
	echo -e "Jest więcej niż 5 plików";
else
	echo -e "Jest mniej niż 5 plików";
fi
