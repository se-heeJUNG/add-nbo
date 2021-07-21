add-nbo: test.o
	gcc test.o -o add-nbo

add-nbo.o: test.cpp
	gcc -c test.cpp
