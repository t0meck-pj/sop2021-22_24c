#!/bin/bash
if [[$1 =~ *[a] ]];
then
	echo -e "$1 ma kota, a kot ma ${1}ę";
else
	echo -e "$1 ma kota, a kot ma ${1}a";
fi
