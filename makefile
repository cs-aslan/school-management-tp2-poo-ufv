TARGET=schoolmanagement.o


CCO=g++
# warnings
WARN=-Wall


CCFLAGS=$(WARN)

SRC= model/*/*/*.cpp exception/*/*.cpp controller/*/*.cpp

all:
	$(CCO) -o $(TARGET) $(SRC) Main.cpp $(CCFLAGS) -lm -O3

debug:
	$(CCO) -o $(TARGET) $(SRC) $(CCFLAGS) -lm -DDEBUG=1 -O3

run:
	./$(TARGET)

clear:
	rm $(TARGET)