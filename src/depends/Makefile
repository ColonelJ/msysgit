TARGET=depends.exe
OBJS=directory.o image.o depends.o

CFLAGS=-g
LIBS=-limagehlp

all: $(TARGET)

install: $(TARGET)
	cp $(TARGET) /mingw/bin

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBS)
