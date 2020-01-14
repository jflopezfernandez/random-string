
vpath %.c src
vpath %.h ../include

CPPFLAGS := $(CPPFLAGS) -DINCLUDE_CUNIT -I ../include/
LIBS     := -lcunit

TESTS = test-args-length

all: $(TESTS)
	./test-args-length

test-args-length: test-args-length.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)    -o $@ $^ $(LIBS)

%.o: $.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -c -o $@ $^ $(LIBS)

.PHONY: clean
clean: clean-auxillary-data-files
	$(RM) $(wildcard *.o) $(TESTS)

.PHONY: clean-auxillary-data-files
clean-auxillary-data-files:
	$(RM) $(wildcard *.dat)
