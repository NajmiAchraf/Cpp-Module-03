#*******************************#
#			FOLDERS				#
#*******************************#

OBJ_DIR = objects
EXE_DIR = executables
DIRS = $(OBJ_DIR) $(EXE_DIR)
MKDIR = mkdir -p $(DIRS)

#*******************************#
#			FILES				#
#*******************************#

NOM = Trap

NAME = $(EXE_DIR)/$(NOM)

NAME_UP = $(shell echo $(NOM) | tr  '[:lower:]' '[:upper:]')

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
# CPPFLAGS += -g -fsanitize=address

SRCS = \
	main.cpp		\
	ClapTrap.cpp	\
	ScavTrap.cpp	\

CPL = 0

#*******************************#
#			COLORS				#
#*******************************#

C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_YELLOW = \033[1;33m
C_BLUE = \033[1;34m
C_MAGENTA = \033[1;35m
C_CYAN = \033[1;36m

C_RES = \033[0m

#*******************************#
#			TEXTS				#
#*******************************#

T_COMP_S = "$(C_YELLOW)➔ COMPILING $(NAME_UP) ... ⚙️$(C_RES)"
T_COMP_E = "$(C_GREEN)... ${NAME_UP} COMPILED ✔$(C_RES)\n"

T_DIR_S = "$(C_YELLOW)➔ CREATING ${NAME_UP} DIRECTORIES ... 📂 $(C_RES)"
T_DIR_E = "$(C_GREEN)... ${NAME_UP} DIRECTORIES CREATED ✔$(C_RES)\n"

T_O_RMV_S = "$(C_MAGENTA)➔ REMOVING $(NAME_UP) OBJECTS ... 🗑 $(C_RES)"
T_O_RMV_E = "$(C_RED)... ${NAME_UP} OBJECTS REMOVED ✔$(C_RES)\n"

T_E_RMV_S = "$(C_MAGENTA)➔ REMOVING $(NAME_UP) EXECUTABLES ... 🗑️$(C_RES)"
T_E_RMV_E = "$(C_RED)... ${NAME_UP} EXECUTABLES REMOVED ✔$(C_RES)\n"

T_RUN_S = "$(C_CYAN)➔ RUN ${NAME_UP} ... 🚀$(C_RES)\n"
T_RUN_E = "$(C_BLUE)... ${NAME_UP} FINISHED ✔$(C_RES)\n"

#*******************************#
#			MAKING OBJS			#
#*******************************#

OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

$(OBJ_DIR)/%.o : %.cpp
	@if [ $(CPL) -eq 0 ]; then \
		printf $(T_COMP_S); \
		$(eval CPL = 1) \
	fi
	@$(CPP) $(CPPFLAGS) -c $< -o $@

#*******************************#
#			MAKING				#
#*******************************#

all : $(DIRS) $(NAME)

$(DIRS) :
	@printf $(T_DIR_S)
	@$(MKDIR)
	@printf $(T_DIR_E)

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@printf $(T_COMP_E)

clean :
	@printf $(T_O_RMV_S)
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@printf $(T_O_RMV_E)

fclean : clean
	@printf $(T_E_RMV_S)
	@rm -f $(NAME)
	@rm -rf $(EXE_DIR)
	@printf $(T_E_RMV_E)

re : fclean all

run : re
	@printf $(T_RUN_S)
	@./$(NAME)
	@printf $(T_RUN_E)

.PHONY : all clean fclean re run
