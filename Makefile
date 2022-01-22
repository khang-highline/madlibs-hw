CC = cl.exe
CFLAGS = /EHsc
RM = rm -rf
SHELL = cmd.exe
.PHONY = all test clean

all: madlibs.exe

madlibs.exe: madlibs.cpp
	$(CC) madlibs.cpp $(CFLAGS)

test:
	printf "Tony Stark\nMarvel\nAssociate of Marvel\nNuclear Engineering\n\
	S.H.I.E.L.D Academy\nIron Man\nbiomedical\nfight\ncode\ndesign\n"| \
	madlibs

clean:
	$(RM) madlibs.exe madlibs.obj
