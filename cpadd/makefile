.PHONY = all clean debug release
.DEFAULT_GOAL := debug release
CC = g++                        # compiler to use
VERSION = 0.0.1
NAME = cppadd
IDIR =./include
SDIR=./src
CFLAGS=-I$(IDIR)
TYPE = .cp #cpp file extention
ODIR =./bin
debug:
	@echo making debug ${NAME} - v${VERSION} ...
	${CC} ${SDIR}/${NAME}$(TYPE) -o $(ODIR)/${NAME}.o $(CFLAGS)
release:
	@echo making release ${NAME} - v${VERSION} ...
