/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:43:22 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/08 15:46:48 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int		ft_isalpha(int c);

int		ft_isalnum(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

int		ft_isascii(int c);

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s);

void	ft_bzero(void *s, size_t n);

size_t	strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *string, int c);

char	*ft_strrchr(const char *string, int c);

int		ft_strncmp(const char *string1, const char *string2, size_t count);
#endif
