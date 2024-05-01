# Compiler
CXX=c++

# Compiler flags
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g -I ./

# Linker flags
LDFLAGS= #-fsanitize=address

# Target executable
TARGET= animal

# Source files
SOURCES= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

# Object files
OBJECTS=$(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to link the program
$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $(TARGET)

# Rule to compile source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

# Clean the build
clean:
	rm -f $(TARGET) $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all