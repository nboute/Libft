/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:59:15 by nboute            #+#    #+#             */
/*   Updated: 2016/12/12 11:20:08 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/*
 ** Proprietes get_next_line
*/

# define BUFF_SIZE 1

typedef struct		s_line
{
	char			*data;
	int				fd;
	struct s_line	*next;
}					t_line;

int					get_next_line(const int fd, char **line);
t_line				*ft_checkfd(t_line **list, int fd);
char				*ft_read(int fd, char *str);

/*
 ** Proprietes Libft
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_getnbr(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
char				*ft_itoa(int n);
int					ft_isprint(int c);
t_list				*ft_lst_last(t_list *list);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *newl);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
float				ft_map(float val, float range, float min2, float max2);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *ptr, int c, size_t n);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *ptr, int value, size_t num);
void				ft_memswap(void **adr1, void **adr2);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putcstr(char *str, int c);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnchar(char c, size_t n);
void				ft_putnstr(char const *str, size_t n);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putwchart(wchar_t *str);
int					ft_sqrt(int nb);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strccpy(char *dest, const char *src, int c);
char				*ft_strcdup(const char *str, int c);
char				*ft_strchr(const char *str, int c);
size_t				ft_strclen(const char *str, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strcn(char *str, int c);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, char const *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strndup(const char *str, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *src, size_t n);
char				*ft_strrchr(const char *str, int c);
char				**ft_strsplit(char const *str, char c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtolower(char *s);
char				*ft_strtrim(char const *s);
void				ft_tabdel(char **tab);
char				**ft_tabnew(int y, int x, char c);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_wchartlen(wchar_t *str);

#endif
