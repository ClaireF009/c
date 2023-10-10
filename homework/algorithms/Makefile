CC = clang
CFLAGS = -Wall -Wextra -Werror -pedantic -O2

# Paths
SRC = src
OBJ = obj
BIN = bin

# Files
SOURCES = $(SRC)/main.c $(SRC)/algo.c
OBJECTS = $(OBJ)/main.o $(OBJ)/algo.o

# Target executable name
TARGET = myprogram

# Default target
all: directories $(BIN)/$(TARGET)

# Creating directories if they don't exist
directories:
	mkdir -p $(OBJ) $(BIN)

# Linking the target executable
$(BIN)/$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile the source files into object files
$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the build
clean:
	rm -rf $(OBJ) $(BIN)
