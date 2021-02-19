#! /bin/sh

cd build

FILE="./sdlproject"
DEBUG="./Debug/sdlproject"
RELEASE="./Release/sdlproject"
if [[ -s $FILE ]]; then
    echo "$FILE exists and not empty"
    ./sdlproject
elif  [[ -s $DEBUG ]]; then
    echo "Running $DEBUG"
    ./Debug/sdlproject
else
    echo "Running $RELEASE"
    ./Release/sdlproject
fi
