.PHONY: clean test bin
bin/Sqrt: obj/main.o obj/func.o
	gcc -o bin/Sqrt obj/main.o obj/func.o -lm

obj/main.o: src/main.c
	gcc -c -o obj/main.o  src/main.c

obj/func.o: src/func.c
	gcc -c -o obj/func.o src/func.c

bin/test: obj/func.o obj/func_test.o obj/ctest.o
	gcc -Wall -o bin/test obj/ctest.o obj/func.o obj/func_test.o -lm

obj/ctest.o: test/ctest.c
	gcc -Wall -c test/ctest.c -o obj/ctest.o -Ithirdparty

obj/func_test.o: test/func_test.c
	gcc -Wall -c test/func_test.c -o obj/func_test.o -Ithirdparty -Isrc

bin: bin/Sqrt

test: bin/test
		bin/test

clean:
	rm -f bin/* obj/*.o
