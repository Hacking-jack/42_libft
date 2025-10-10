/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:53:59 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/08 17:55:56 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	while (*string != c && *string)
		string++;
	return (string);
}
