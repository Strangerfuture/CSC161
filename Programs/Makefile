# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -O2

# Source files (all .c in current directory)
SRCS := $(wildcard *.cpp)

# Executables (same name as source, placed in build/)
BINS := $(patsubst %.cpp,build/%,$(SRCS))

# Default target
all: build $(BINS)

# Rule to build each executable
build/%: %.cpp | build
	$(CC) $(CFLAGS) -o $@ $<

# Create build directory if it doesn't exist
build:
	mkdir -p build

clean:
	rm -rf build
