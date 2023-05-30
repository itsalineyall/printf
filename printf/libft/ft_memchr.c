/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:35:33 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/29 16:09:33 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função memchr é uma função padrão da biblioteca em C que
// busca um valor especificado em um bloco de memória. Ela
// recebe um ponteiro para o bloco de memória a ser
// pesquisado, o valor a ser buscado e o número de bytes
// a serem pesquisados. A função procura o valor especificado
// nos primeiros bytes do bloco de memória e retorna um ponteiro
// para a primeira ocorrência do valor encontrado. Se o valor
// não for encontrado, a função retorna NULL. 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;
	unsigned char		ch;
	size_t				i;

	s2 = (const unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == ch)
			return ((void *)&s2[i]);
		i++;
	}
	return (NULL);
}
