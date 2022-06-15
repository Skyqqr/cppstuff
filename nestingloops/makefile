.PHONY = all clean
CC = g++                        # compiler to use
NAME = nestloop
IDIR =./include
SDIR=./src
CFLAGS=-I$(IDIR)
TYPE = .cpp
ODIR =./bin
make:
	${CC} ${SDIR}/${NAME}$(TYPE) -o $(ODIR)/${NAME}.o $(CFLAGS)
