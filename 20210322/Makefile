CC=gcc
CFILE=main.c funcBody.c
TARGET=rabbitInDanger.exe

all:
	$(CC) $(CFILE) -o $(TARGET)

build:
	$(TARGET)

#.PHONY prevents make from getting confused by an actual file\
called clean and causes it to continue in spite of errors from rm. 

.PHONY:	clean
clean:
	del $(TARGET)
	