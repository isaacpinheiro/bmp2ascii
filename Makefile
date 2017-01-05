.PHONY: build clean install

build:
	gcc -c *.c
	gcc *.o -o bmp2ascii

clean:
	rm *.o
	rm bmp2ascii

install:
	gcc -c *.c
	gcc *.o -o bmp2ascii
	rm *.o
	mv bmp2ascii /usr/local/bin
	echo "\n\nbmp2ascii was successfully installed."

