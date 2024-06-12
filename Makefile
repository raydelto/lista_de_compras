SRC = Elemento.cpp \
      Lista.cpp \

OBJ = Elemento.o \
      Lista.o

FLAGS = -std=c++17

all:
	g++ -c ${SRC} ${FLAGS}
	g++ ${OBJ} ${FLAGS} main.cpp -o lista
