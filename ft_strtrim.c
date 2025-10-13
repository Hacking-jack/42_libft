/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:58:04 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/12 13:15:39 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	trim = malloc(len + 1);
	
}
