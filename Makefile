NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

# Automatically find all source files in the current directory
SOURCES = $(wildcard *.c)
# Generate a list of object files from the source files
OBJECTS = $(SOURCES:.c=.o)
# Name of your final library
TARGET = libft.a

# Default goal: build the library
all: $(TARGET)

# Rule to create the library from the object files
$(TARGET): $(OBJECTS)
	$(AR) $@ $^
	@echo "Library $@ built successfully."

# Rule to compile each .c file into a .o file
%.o: %.c
	$(CC) -MMD -MP $(CFLAGS) -c $< -o $@

# Include auto-generated dependency files
-include $(SOURCES:.c=.d)

# Phony target to clean up built files
.PHONY: clean
clean:
	rm -f $(TARGET) *.o *.d
