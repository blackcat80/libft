/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:41:03 by csitja-b          #+#    #+#             */
/*   Updated: 2023/01/31 16:02:42 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include<fcntl.h>
# include<limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 600
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

# define TRUE         (int)1
# define FALSE        (int)0

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *str);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		**ft_split(char const *s, char c);
int			ft_tolower(int c);
int			ft_toupper(int c);

//bonus

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// Ft_printf Libreria

int			ft_printf(const char *format, ...);

// funciones en functions_1

void		print_char(va_list arg, int *arg_len);
void		print_int(va_list arg, int *arg_len);
void		print_uint(va_list arg, int *arg_len);
void		print_str(va_list arg, int *arg_len);

// funciones en functions_3

void		ft_putchar(char c, int *base_len);
void		ft_putstr(char *s, int *base_len);
void		ft_putnbr(int n, int *base_len);
void		ft_putnbr_u(unsigned int n, int *base_len);
void		ft_putnbr_base_ul(unsigned long n, char *base, int *len);

// funciones en functions_2

void		print_hexa(va_list arg, int *arg_len, char c);
void		print_address_hexa(va_list arg, int *arg_len);
int			check_base(char *base);
void		ft_putnbr_base_u(unsigned int n, char *base, int *len);

// funciones get next line
char		*true_free(char **str);
char		*ft_cutline(char *butterp);
char		*ft_returnline(char *bufferp);
char		*ft_addbuffer(char *bufferp, char *buffer);
char		*ft_read(int fd, char *buffer);
char		*get_next_line(int fd);
char		*get_next_line_bonus(int fd);

#endif
