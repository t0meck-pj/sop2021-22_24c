#!/bin/bash

imie=$1;

sed -e s/Arek/`echo -e "\e[32mArek\e[0m"`/g $imie;
