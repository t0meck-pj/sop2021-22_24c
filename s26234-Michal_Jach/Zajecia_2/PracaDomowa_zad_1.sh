#!/bin/bash

michal=$( sed 's/\Michal\>/\\e[31mMichal\e[0m/g' $1 )
echo -e "$michal"
