int-table: main.o binary.o signed.o
	gcc $^ -o $@

clean: 
	rm *.o

.PHONY: clean

%.o: %.c
	gcc -c $^ -Wall -O2
