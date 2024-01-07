#!/bin/bash

name=$1

g++ -std=c++17 $name.cpp -o output_files/$name.exe
./output_files/$name.exe