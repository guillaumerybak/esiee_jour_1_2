
EXO = esiee_print_number

SRC := $(wildcard *.c)
SRC += $(wildcard ../../*.c)

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -I../../

all: $(EXO)

$(EXO): $(OBJ)
	gcc -o $(EXO) $(OBJ)

.PHONY: clean mrproper

clean:
	@rm -fv $(OBJ)

mrproper: clean
	@rm -fv $(EXO)
