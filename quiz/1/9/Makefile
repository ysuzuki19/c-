PROG = src.cpp
TARGET = proj
LIBRARY = ../../mylib
CXX = g++
CXX_VERSION = -std=c++17
CXX_OPTION = -Wall -Wextra

${TARGET} : ${PROG} ${LIBRARY}
	${CXX} ${CXX_VERSION} -o ${TARGET} -I${LIBRARY} ${CXX_OPTION} ${PROG}


run :
	./proj

clean :
	rm -r ${TARGET}
