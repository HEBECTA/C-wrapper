all: lib main

lib:
	$(MAKE) -C ./wrapper
	$(MAKE) -C ./cplusplus
	ld -relocatable ./obj/wrapper.o ./obj/cplusplus.o -o ./obj/lib.o

main:
	gcc -c main.c -o ./obj/main.o
	g++ ./obj/main.o ./obj/lib.o -o ./bin/main

clean:
	rm -f ./bin/main ./obj/*.o

