#!/bin/bash

file="${basename $0}"
if [ ${filename: -3} = ".sh" ];
then
	echo -e "To plik z rozszrzeniem .sh";
else
	echo -e "To nie jest plik z rozszerzeniem .sh"
	mv $file ${file}.sh
fi
