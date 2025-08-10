#!/bin/bash

# This script builds and runs a C++ program using g++
# Usage: ./build_and_run_cpp.sh <source_file.cpp>

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <source_file.cpp>"
    exit 1
fi

SOURCE_FILE="$1"
BASENAME=$(basename "$SOURCE_FILE" .cpp)
g++ -fdiagnostics-color=always -g -o "$BASENAME" "$SOURCE_FILE" && ./"$BASENAME"
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi