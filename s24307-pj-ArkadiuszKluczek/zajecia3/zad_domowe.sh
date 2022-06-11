#!/bin/bash

if [[ $1 == *"@"* ]]; then
	echo -e "email"
elif [[ $1 == *"-"* ]]; then
	echo -e "kod pocztowy"
else
	echo -e "imie"
fi
