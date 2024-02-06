all: lib main

lib:
	$(MAKE) -C ./wrapper
	$(MAKE) -C ./cplusplus
	g++ -o ./bin/libwrapper.so -shared -fPIC ./obj/wrapper.o ./obj/cplusplus.o 

main:
	gcc main.c -o ./bin/main -L./bin -lwrapper -Wl,-rpath,./bin

clean:
	rm -f ./bin/main ./bin/*.so ./obj/*.o

