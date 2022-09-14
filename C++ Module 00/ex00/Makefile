NAME = maga

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98  # __Formatting__and__namin__conventions__

RED = \033[0;31m
GREEN = \033[0;32m
NO_COLOR = \033[0m

CODE_FILE = megaphone.cpp

OBJ_FILES = $(CODE_FILE:.cpp=.opp)

%.opp:%.cpp
	@${CC} ${CFLAGS} -o $@ -c $<

all: ${NAME}

$(NAME): ${OBJ_FILES}
	@${CC} ${CFLAGS} ${OBJ_FILES} -o ${NAME}
	@echo "${GREEN} • Now you can run the exucitable file ./${NAME}${NO_COLOR}"

clean:
	@rm -rf ${OBJ_FILES}
	@echo "${RED} • ALL object files were deleted${NO_COLOR}"

fclean: clean
	@rm -rf ${NAME}
	@echo "${RED} • The executed file was removed${NO_COLOR}"

re: fclean all

.PHONY: re fclean clean all
