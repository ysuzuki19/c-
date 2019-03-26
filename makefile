PROG = main.cpp
TARGET = proj
LIBRARY = ../library
CXX = g++

${TARGET} : ${PROG}
	${CXX} -o ${TARGET} -I${LIBRARY} ${PROG}


