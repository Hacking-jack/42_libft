# 📁 Makefile para librería libft

# Configuración
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Archivos fuente (.c)
SRCS = $(wildcard ft_*.c)
# Convierte .c en .o
OBJS = $(SRCS:.c=.o)

# Regla principal
all: $(NAME)

# Compila la librería
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "✅ Librería $(NAME) compilada"

# Compila cada .c en .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Limpia archivos objeto
clean:
	@$(RM) $(OBJS)
	@echo "🧹 Objetos eliminados"

# Limpia todo (objetos y librería)
fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  Librería $(NAME) eliminada"

# Recompila desde cero
re: fclean all

# Evita conflictos con archivos que se llamen igual
.PHONY: all clean fclean re
