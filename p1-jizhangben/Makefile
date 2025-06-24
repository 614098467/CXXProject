CC=g++
CFLAGS=-g -Wall
TARGET=main
SOURCES=main.cpp ledger.cpp

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean