/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:20:35 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/10 12:56:12 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//inserta un string en otro y pone el ultimo caracter a '\0'
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	copy_len;

	len_src = ft_strlen(src);
	copy_len = len_src;
	if (0 < size)
	{
		if (len_src >= size)
			copy_len = size - 1;
		ft_memcpy(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (len_src);
}
