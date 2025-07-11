GC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/vector.c
TEST = tests/test_vector.c
BIN = test_vector.out

all: $(BIN)

$(BIN): $(SRC) $(TEST)
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o $(BIN)

clean:
	rm -f *.out
