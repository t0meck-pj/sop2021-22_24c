#!/bin/bash
x=$(ls -p)
for i in $x; do
	if [ ${i: -1} == "c" ];then
		cc $i -o ${i: -2}
	fi
done
