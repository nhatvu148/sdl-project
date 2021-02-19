#! /bin/sh

cd build

FILE="./sdlproject"
if [[ -s $FILE ]]; then
    echo "$FILE exists and not empty"
    ./sdlproject
else
    echo "$FILE doesn't exist or is empty"
    ./Debug/sdlproject
fi
