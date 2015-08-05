VERSION 	= 0
PATHLEVEL	= 1
SUBLEVEL	= 0
EXTRAVERSION 	= 
NAME		= Coord Transform Library - EQUATORIAL <--> ALTZIMUT
## Switch #######################################
DEBUGMODE	:= true
#################################################

ESEGUIBILE	:= test_coord.x
OBJ		:= main.o coord.o
CC		:= g++

ifdef DEBUGMODE
FLAGS 		:= -O3 -g 
LIBS		:= 
INC		:= 
else
FLAGS		:= -O3
LIBS		:=
INC		:=
endif

%.o : %.cpp
	$(CC) ${LIBS} ${FLAGS} -c $< -o $@

${ESEGUIBILE}: ${OBJ}
	$(CC) ${LIBS} ${FLAGS} -o $@ $^	



.PHONY: clean

clean:
	rm -rf *.out *.x *.o


