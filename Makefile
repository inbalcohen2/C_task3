CC=gcc
FLAGS= -Wall -g

all: isort txtfind

isort: main_insertionSort.o insertion_sort.o insertion_sort.h
	$(CC) $(Flags) -o isort main_insertionSort.o insertion_sort.o

txtfind: main_txt.o text_search.o text_search.h
	$(CC) $(Flags) -o txtfind main_txt.o text_search.o

main_insertionSort.o: main_insertionSort.c insertion_sort.h
	$(CC) -c main_insertionSort.c

insertion_sort.o: insertion_sort.c insertion_sort.h
	$(CC) -fPIC -c insertion_sort.c

main_txt.o: main_txt.c text_search.h
	$(CC) -c main_txt.c

text_search.o: text_search.c text_search.h
	$(CC) -fPIC -c text_search.c

.PHONY: clean all


clean:
	rm -f *.o isort txtfind
