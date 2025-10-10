/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:23:43 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/08 18:30:31 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t count)
{
	size_t	i;
	size_t	str1_l;
	size_t	str2_l;

	str1_l = ft_strlen(string1);
	str2_l = ft_strlen(string2);
	i = 0;
	if (str1_l >= count && str2_l >= count)
	{
		while ((string1[i] || string2[i]) && count > i)
		{
			if (string1[i] != string2[i])
				return ((unsigned char)string1[i] - (unsigned char)string2[i]);
			i++;
		}
		return (0);
	}
	return (-1);
}
