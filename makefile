bin/recursive_fib.o: src/recursive_fib.c
	gcc -c src/recursive_fib.c
	mv recursive_fib.o bin
	
bin/iterative_fib.o: src/iterative_fib.c
	gcc -c src/iterative_fib.c
	mv iterative_fib.o bin
	
bin/print_fib.o: src/print_fib.c src/fib.h
	gcc -c src/print_fib.c
	mv print_fib.o bin
	
bin/personalised_fib.o: src/personalised_fib.c
	gcc -c src/personalised_fib.c
	mv personalised_fib.o bin
	
bin/second_main.o: src/second_main.c src/fib.h
	gcc -c src/second_main.c
	mv second_main.o bin
	
stage1: bin/recursive_fib.o bin/print_fib.o
	gcc bin/recursive_fib.o bin/print_fib.o -o stage1
	
stage2: bin/iterative_fib.o bin/print_fib.o
	gcc bin/iterative_fib.o bin/print_fib.o -o stage2

stage3: bin/personalised_fib.o bin/second_main.o
	gcc bin/personalised_fib.o bin/second_main.o -o stage3

clean:
	rm -f bin/recursive_fib.o bin/print_fib.o stage1
	rm -f bin/iterative_fib.o bin/print_fib.o stage2
	rm -f bin/personalised_fib.o bin/second_main.o stage3
	
