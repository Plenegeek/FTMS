all: ftms

ftms: main.o cpu.o
	g++ main.o cpu.o -o ftms

main.o: main.cpp cpu.hpp
	g++ -c main.cpp -o main.o

cpu.o: cpu.cpp cpu.hpp
	g++ -c cpu.cpp -o cpu.o

clean:
	rm -f ftms main.o cpu.o
