CC = cl.exe
CFLAGS = /EHsc
RM = rm -rf
SHELL = cmd.exe
.PHONY = all test clean

all: madlibs.exe

madlibs.exe: madlibs.cpp
	$(CC) madlibs.cpp $(CFLAGS)

test:
	echo Tony Marvel associate CSCI Highline developer biomedical read \
	code design | madlibs

clean:
	$(RM) madlibs.exe madlibs.obj
