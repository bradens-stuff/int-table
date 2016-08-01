int-table: 
	cd src && $(MAKE)
	mv src/$@ ./

clean:
	cd src && $(MAKE) clean

install: int-table
	mv $^ /usr/local/bin

uninstall:
	rm /usr/local/bin/int-table

.PHONY: clean install uninstall
