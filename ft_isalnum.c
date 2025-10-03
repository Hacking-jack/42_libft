/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:51:02 by danrodr3          #+#    #+#             */
/*   Updated: 2025/09/30 16:00:01 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalnum.h"
#include "ft_isdigit.h"
#include "ft_isalpha.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
