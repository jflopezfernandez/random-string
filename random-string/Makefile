
RM = rm -f

vpath %.c src
vpath %.h include

CC       := gcc
CFLAGS   := -std=c17 -Wall -Werror -pedantic -Og -g
CPPFLAGS := $(CPPFLAGS) -I include
LDFLAGS  := 
LIBS     :=

TARGET = random-string

all: $(TARGET)

check: $(TARGET)
	make --directory=tests

$(TARGET): main.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)    -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -c -o $@ $^

.PHONY: clean
clean: clean-tests
	$(RM) $(wildcard *.o) $(TARGET)

.PHONY: clean-tests
clean-tests:
	make clean --directory=tests
