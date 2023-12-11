CC=/usr/bin/aarch64-linux-gnu-gcc
CFLAGS=
MODE=
ifeq ($(DEBUG), yes)
	CFLAGS=-g -Wall
	MODE=debug
else
	MODE=release
	CFLAGS=-Wall
endif
HOME= /home/syscom
LIBS=
OBJ = max.o min.o var.o
MAIN=main.c

%.o : %.c
	@echo Creating object file in $(MODE) mode
	$(CC) $(CFLAGS) -c $^ -o $@


main : $(OBJ)
	@echo Compiling main in $(MODE) mode
	$(CC) $(CFLAGS) $(MAIN) $(LIBS) $(OBJ) -o main


install : $(OBJ)
	@echo Installing main in $(MODE) mode
	$(CC) $(CFLAGS) $(MAIN) $(LIBS) $(OBJ) -o $(HOME)/main

clean :
	@echo Cleaning in $(MODE) mode
	rm -rf *.o main $(HOME)/main
