#!/bin/bash
function fib(){
	if [ ${1} == 0 ];
then
	return 0;
	elif [ ${1} == 1 ];
then
	return 1;
else
	return fib[ (${1}-1) ]  + fib[ (${1}-2) ]
fi
}
echo -e "Ciąg fibonacciego:" fib 
