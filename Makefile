ABC.exe: main.o file.o fact.o
	gcc -o ABC.exe main.o file.o fact.o
main.o:main.c
	gcc -c main.c
file.o:file.c
	gcc -c file.c
fact.o:fact.c
	gcc -c fact.c