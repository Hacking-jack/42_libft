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

size_t	count_num(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

void	add_word(char **spl, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			spl[j] = malloc((i - start + 1) * sizeof(char));
			if (!spl[j])
				return ;
			ft_memcpy(spl[j], s + start, i - start);
			spl[j][i - start] = '\0';
			j++;
		}
	}
	spl[j] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**spl;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_num(s, c);
	if (words != 0)
	{
		spl = malloc((words + 1) * sizeof(char *));
		if (!spl)
			return (NULL);
		add_word(spl, s, c);
	}
	else
	{
		spl = malloc(sizeof(char *));
		if (!spl)
			return (NULL);
		spl[0] = NULL;
	}
	return (spl);
}
