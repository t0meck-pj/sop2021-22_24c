!#/bin/bash

pliki=`ls -p | grep -cv /`

echo "Ilosc plikow:" $plik

if [ "$pliki" -gt 5 ]; then

	echo "Jest wiecej niz 5 plikow"
 
 fi
 
