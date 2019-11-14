CC = g++
FLAGS = -O0 -Wall
IDIR:= Code/inc/ Test/*.cpp
test:
	$(CC) $(FLAGS) -I $(IDIR) $(SDIR) -o test
