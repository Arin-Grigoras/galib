CC = g++
SRC = ${wildcard ./src/*.cpp}
BUILD = ./build/galib.o


all: ./src/test.cpp
	${CC} ${SRC} -o ${BUILD}