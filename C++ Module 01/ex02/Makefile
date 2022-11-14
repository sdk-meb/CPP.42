NAME = BRAIN

CC = c++

RED = \033[0;31m
GREEN = \033[0;32m
NO_COLOR = \033[0m

CFLAGS = -Wall -Wextra -Werror -std=c++98 # __Formatting__and__namin__conventions__

SRC_FILE = main.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.opp)

%.opp:%.cpp
	@${CC} ${CFLAGS} -o $@ -c $<

all: ${NAME}

$(NAME): ${OBJ_FILE}
	@${CC} ${CFLAGS} ${OBJ_FILE} -o ${NAME}
	@echo "${GREEN} • Now you can run the exucitable file ./${NAME}${NO_COLOR}"

clean:
	@rm -rf ${OBJ_FILE}
	@echo "${RED} • The object file was deleted${NO_COLOR}"

fclean: clean
	@rm -rf ${NAME}
	@echo "${RED} • The executed file was removed${NO_COLOR}"

re: fclean all

.PHONY: re fclean clean all