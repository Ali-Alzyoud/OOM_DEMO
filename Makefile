CC?=gcc
EDJE_CC?=edje_cc
CFLAGS?=
LIBS?=
LDFLAGS?=
CFLAGS+=`pkg-config --cflags elementary`
LIBS+=`pkg-config --libs elementary`

all: apppp

apppp: source.c
	$(CC) source.c $(CFLAGS) $(LDFLAGS) $(LIBS) -o apppp
clean:
	rm app

