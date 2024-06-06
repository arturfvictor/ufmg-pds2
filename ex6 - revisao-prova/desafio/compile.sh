#!/bin/bash
# source ./compile.sh

cd grafo-cpp/
g++ -c *.cpp
cd ..
g++ main.cpp grafo-cpp/*.o -o out.o