main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp funcs.h

unindent.o: unindent.cpp funcs.h

indent.o: indent.cpp funcs.h


clean:
	rm -f main.o unindent.o indent.o