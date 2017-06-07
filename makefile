SRC = main.cpp

HDR =

OBJ = main.o

CXX = g++
CXXFLAGS = -std=c++0x

make: ${OBJ} ${HDR}
	${CXX} ${CXXFLAGS} ${OBJ} -o run

${OBJ}: ${SRC}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f *.o run
