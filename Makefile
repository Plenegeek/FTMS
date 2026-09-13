CXX = g++
CXXFLAGS = -Iinclude

TARGET = ftms

OBJECTS = build/main.o \
	build/cpu.o \
	build/ram.o \
	build/uptime.o \
	build/model.o \

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

build/main.o: main.cpp include/cpu.hpp include/memory.hpp include/uptime.hpp include/model.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

build/cpu.o: src/cpu.cpp include/cpu.hpp
	$(CXX) $(CXXFLAGS) -c src/cpu.cpp -o build/cpu.o

build/ram.o: src/ram.cpp include/memory.hpp
	$(CXX) $(CXXFLAGS) -c src/ram.cpp -o build/ram.o

build/uptime.o: src/uptime.cpp include/uptime.hpp
	$(CXX) $(CXXFLAGS) -c src/uptime.cpp -o build/uptime.o

build/model.o: src/model.cpp include/model.hpp
	$(CXX) $(CXXFLAGS) -c src/model.cpp -o build/model.o

clean:
	rm -f $(TARGET) build/*.o
