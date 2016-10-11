##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Thomas Murgia <garuda1@protonmail.com>
##

INCLUDE_DIR = ./include
SOURCE_DIR = ./source
NAME = sig
RM = rm -f
CFLAGS += -Wall\
          -Wextra \
					-Werror \
					-pedantic \
					-std=c99 \
					-I./$(INCLUDE_DIR) \
					-lunixlib \
					-O2

SRCS = $(SOURCE_DIR)/main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
