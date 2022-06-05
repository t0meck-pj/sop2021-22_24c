!#/bin/bash
  
for i in $(seq 1 1 10); do echo $i; done

for ((i = 1; (i < 10 && i!=3); i++)); do echo $i; done
