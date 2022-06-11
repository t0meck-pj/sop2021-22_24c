#!/bin/bash
for i in $@; do
	echo -e "\n Od początku: "
	cat $i
	echo -e "Od konca: "
	cat $i | rev
done
