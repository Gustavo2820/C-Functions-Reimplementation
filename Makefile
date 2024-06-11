SRC_DIR = src/my_string
TEST_DIR = examples
BUILD_DIR = build
HEADER_DIR = headers

# Source files and objects
SRCS := $(wildcard $(SRC_DIR)/*.c)
SRCS += $(wildcard $(TEST_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# Executable
EXECUTABLE = main

# Compiler
CC = gcc

# Standard rule
all: $(EXECUTABLE)

# Executable compiler rule
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Object compilation rule
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_DIR)/%.h
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c $(HEADER_DIR)/%.h
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

# Clear rule
clean:
	rm -rf $(BUILD_DIR) $(EXECUTABLE)
