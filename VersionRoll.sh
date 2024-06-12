#!/bin/bash
value=$(<Version.txt)
echo "$value"
echo "$1"
value=$((value+1))
git add *
git commit -m "commit numberº $value : $1"
git push -u origin master
echo "$value" > Version.txt

