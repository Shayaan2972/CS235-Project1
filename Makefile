# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Source files
SRC = Dish.cpp test.cpp

# Executable name
EXEC = dish_test

# Rule to build the executable
all: $(EXEC)

# Rule to link object files and create the executable
$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

# Clean up the executable
clean:
	rm -f $(EXEC)

# Rebuild rule: clean the project and rebuild it
rebuild: clean all
