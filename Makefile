rush-02:	ft_strlcpy.o ft_open_and_read_dictionary.o main.c
	cc -Wall -Wextra -Werror ft_strlcpy.o ft_open_and_read_dictionary.o main.c -o rush-02

ft_open_and_read_dictionary.o:	ft_open_and_read_dictionary.c
	cc -c ft_open_and_read_dictionary.c -o ft_open_and_read_dictionary.o

ft_strlcpy.o:	ft_strlcpy.c
	cc -c ft_strlcpy.c -o ft_strlcpy.o
