/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:44:28 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/13 17:46:51 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	len;
	size_t	i;
	char	*bck;
	size_t	end;

	if (*s)
		return (NULL);
	bck = ft_strtrim(s, c);
	len = ft_strlen(bck);
	start = 0;
	while (i < len && (bck[i++] == c))
		start++
	i = 0;
	spl = malloc(start + 1);
}
