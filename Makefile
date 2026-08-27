all: ftms

ftms: main.o cpu.o ram.o
        g++ main.o cpu.o ram.o -o ftms

main.o: main.cpp cpu.hpp
        g++ -c main.cpp -o main.o

cpu.o: cpu.cpp cpu.hpp
        g++ -c cpu.cpp -o cpu.o

ram.o: ram.cpp memory.hpp
        g++ -c ram.cpp -o ram.o

clean:
        rm -f ftms main.o cpu.o ram.o
