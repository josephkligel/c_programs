SRC=$(wildcard *.c)

PROGS=$(patsubst %.c,%,$(SRC))

all: $(PROGS)

%:%.c
	gcc -o $@ $<
