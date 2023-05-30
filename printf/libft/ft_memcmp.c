/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:38:41 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/29 16:41:50 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função memcmp é uma função padrão da biblioteca em C que compara
// blocos de memória. Ela recebe dois ponteiros para os blocos a
// serem comparados e um tamanho em bytes a ser comparado. A função
// compara os primeiros bytes dos blocos e retorna um valor inteiro
// que indica a ordem relativa dos bytes que diferem. Se os blocos
// são iguais, a função retorna 0.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
