/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:17:45 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/02 10:20:11 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"
#include "ft_isprint.h"

int	ft_strlen(const char *s)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (ft_isprint(s[i]))
	{
		i++;
		counter++;
	}
	return (counter);
}
