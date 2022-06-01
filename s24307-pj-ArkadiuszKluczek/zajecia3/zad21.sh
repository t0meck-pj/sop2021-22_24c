#!bin/bash
function color(){
	echo -e "${2}${1}\e[0m"
}
color "Hello World" "\e[31m"
