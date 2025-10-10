/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:55:01 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/10 18:10:06 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	*iniciado;
	size_t	i;

	i = 0;
	iniciado = (size_t *)malloc(size * num);
	if (!iniciado)
		return (NULL);
	ft_bzero(iniciado,size * num);
	return (iniciado);
}
