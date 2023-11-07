CC = gcc
PROG_NAME ?= prog

$(PROG_NAME): SampleProg.o
	$(CC) -o $(PROG_NAME) SampleProg.o

%.o: %.c
	$(CC) -MD -MF $(subst .c,.d,$^) -o $@ -c $^

.PHONY: clean
clean: 
	rm -f *.o *.d
	rm -f $(PROG_NAME)

.PHONY: install
install: 
	install -m 655 -o root $(PROG_NAME) /usr/bin
