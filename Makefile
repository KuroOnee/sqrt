bin/Sqrt: obj/main.o obj/func.o
	gcc -o bin/Sqrt obj/*.o -lm
    
obj/main.o: src/main.c
	gcc -c -o obj/main.o  src/main.c

obj/func.o: src/func.c
	gcc -c -o obj/func.o src/func.c

.PHONY: clean
clean:
	rm -f bin/Sqrt obj/*.o
