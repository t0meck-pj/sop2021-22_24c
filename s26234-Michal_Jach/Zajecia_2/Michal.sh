#!/bin/bash

A=$0
Michal=\033[31mMichal\e[0m
echo -e ${A/Michal/$Michal}

