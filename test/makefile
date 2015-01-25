cc = clang++
cflag = -c -g -std=c++0x

run:main.o
	${cc} -o run main.o
main.o:main.cpp
	${cc} ${cflag} main.cpp
clean:
	rm *.o
	rm run
