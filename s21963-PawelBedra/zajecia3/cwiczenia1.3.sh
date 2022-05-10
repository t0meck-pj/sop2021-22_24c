#!/bin/bash

plik="$0"

if [[ "${plik}" =~ ".sh" ]]; then

	echo "Plik jest z rozszerzeniem sh"
else 
	mv $plik $plik.sh
fi


if [[ "${plik:(${#plik}-3):3}" =~ ".sh" ]]; then
	echo "Drugie potwierdzenie, ze jest plikiem *.sh"
fi


