CC = g++
CFLAGS = -std=c++11 -Wall

# List of source files
SRCS = main.cpp Zoo.cpp Enclosure.cpp ZooKeeper.cpp Animal.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Name of the executable
TARGET = main

all: $(TARGET)
	./main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
