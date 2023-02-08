CC=clang 
CLFAGS=-I 
SRCDIR=./src/ 
SRC=*.c 
BINDIR=./bin/
BIN=main 

all: 
	$(CC) $(SRCDIR)$(SRC) -o $(BINDIR)$(BIN) 

clean: 
	$(RM) $(BINDIR)$(BIN) 

