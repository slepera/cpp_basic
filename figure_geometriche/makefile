INCLUDES =  -I.
CC = g++
CFLAGS  = -fpic -g -Wall
OBJ_DIR = .
SRC_DIR = .
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:.c=.o)
OBJS2 = $(wildcard $(OBJ_DIR)/*.o)

MAIN = main
all: $(MAIN)

$(MAIN): $(OBJS) $(OBJS2)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(OBJS2)
	
c.o: 
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@