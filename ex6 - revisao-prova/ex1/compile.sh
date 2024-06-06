#!/bin/bash
# source ./compile.sh

cd funcionario-cpp/
g++ -c *.cpp
cd ..
g++ main.cpp funcionario-cpp/*.o -o out.o