/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:01:54 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/08 18:02:20 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (string[i])
	{
		if (string[i] == c)
			j = i ;
		i++;
	}
	if (c == '\0')
		return (&string[i]);
	if (j != -1)
		return (&string[j]);
	return (NULL);
}
