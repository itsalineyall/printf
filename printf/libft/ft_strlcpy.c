/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:35:44 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/16 14:17:37 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia uma string para um buffer de destino (maximo n -1)
// e retorna o tamanho da string de origem.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size != 0)
	{
		while (src[j] && j < (size - 1))
		{
			dst[j] = src[j];
			j++;
		}
	dst[j] = '\0';
	}
	return (ft_strlen(src));
}
