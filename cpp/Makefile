# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# Source files
SRCS = $(wildcard $(SRC_DIR)/**/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Executables
MAIN_EXEC = main

# Default target
all: $(MAIN_EXEC)

# Build main executable
$(MAIN_EXEC): main.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(MAIN_EXEC) main.o $(OBJS)

# Compile main.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# Compile object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the main program
run: $(MAIN_EXEC)
	./$(MAIN_EXEC)

# Clean build files
clean:
	rm -rf $(BUILD_DIR) *.o $(MAIN_EXEC) $(TEST_EXEC)

.PHONY: all run test clean
