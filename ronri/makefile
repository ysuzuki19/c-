PROG = src.cpp
TARGET = proj
CXX = g++
CXX_VERSION = -std=c++17
CXX_OPTION = -Wall -Wextra

${TARGET} : ${PROG}
	${CXX} ${CXX_VERSION} -o ${TARGET} ${CXX_OPTION} ${PROG}

run :
	./proj

clean :
	rm -r ${TARGET}
