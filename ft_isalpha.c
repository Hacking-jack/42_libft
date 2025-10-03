/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:08:37 by danrodr3          #+#    #+#             */
/*   Updated: 2025/09/30 15:04:08 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.h"

int	_ftisalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
/*
int main(void) {
    char c1 = 'a';
    char c2 = '1';

    printf("Resultado con '%c': %d\n", c1, ft_isalpha(c1));
    printf("Resultado con '%c': %d\n", c2, ft_isalpha(c2));

    return 0;
}
*/
