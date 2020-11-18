/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:05:04 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/18 11:39:21 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *pointer, int value, size_t len);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
