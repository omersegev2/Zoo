CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++11

SRC_DIR = C:\Users\omerg\Desktop\programin3\Section1Z00
OBJ_DIR = C:\Users\omerg\Desktop\programin3\Section1Z00

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

TARGET = main

.PHONY: all clean

all: $(TARGET)
	./main.exe

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
