NAME=cla

RUNOPTIONS=Hello World


ROOTNAME=$(NAME)
FOPTION=_main
CC=gcc
CFLAGS= -g -I.
# To add libraries, add "-l <libname>", for multiple repeat prior for each lib.
LIBS =
DEPS = 
OBJ = $(ROOTNAME)$(FOPTION).o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ROOTNAME)$(FOPTION): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)  $(LIBS)

clean:
	rm *.o $(ROOTNAME)$(FOPTION)

run: $(ROOTNAME)$(FOPTION)
	./$(ROOTNAME)$(FOPTION) $(RUNOPTIONS)