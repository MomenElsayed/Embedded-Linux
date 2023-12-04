#!/bin/bash 
echo $1
string1="database_url"
string2="username"
string3="password"
string4="debug_mode"
source_file="config.ini"
if test "$1" = "$string1"
then
awk '/database_url/ {split($1,a,"=");print a[2]}' $source_file
elif test "$1" = "$string2" 
then
awk '/username/ {split($1,a,"=");print a[2]}' $source_file
elif test "$1" = "$string3"
then
awk '/password/ {split($1,a,"=");print a[2]}' $source_file
elif test "$1" = "$string4"
then
awk '/debug_mode/ {split($1,a,"=");print a[2]}' $source_file
else
echo "Key Not Found"
fi
