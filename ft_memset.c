/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:05:40 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:09:12 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//este metodo rellena un array/espacio en memoria 
//con el caracter c que nosotros deseemos
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (p);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer1[20];
    char buffer2[20];
    int i;

    // Inicializamos buffers
    memset(buffer1, 0, sizeof(buffer1));
    memset(buffer2, 0, sizeof(buffer2));

    // Rellenamos con ft_memset y memset estándar
    ft_memset(buffer1, 'A', 10);
    memset(buffer2, 'A', 10);

    printf("Comparando ft_memset y memset estándar:\n");
    for (i = 0; i < 20; i++)
        printf("buffer1[%d] = %c, buffer2[%d] = %c\n", i,
			buffer1[i], i, buffer2[i]);

    // Test con ceros
    ft_memset(buffer1, 0, 20);
    printf("\nDespués de rellenar con 0:\n");
    for (i = 0; i < 20; i++)
        printf("%d ", buffer1[i]);
    printf("\n");

    return 0;
}*/
