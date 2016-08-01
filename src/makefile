int-table: main.o binary.o args.o signed.o
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -Wall -O2

clean: 
	rm *.o int-table

.PHONY: clean

