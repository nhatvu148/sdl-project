#!/bin/sh

# $0	The name of the bash script.
# $1, $2...$n	The bash script arguments.
# $$	The process id of the current shell.
# $#	The total number of arguments passed to the script.
# $@	The value of all the arguments passed to the script.
# $?	The exit status of the last executed command.
# $!	The process id of the last executed command.

echo "Name of the script: $0"
echo "Total number of arguments: $#"
echo "Values of all the arguments: $@"