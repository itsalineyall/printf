/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:09:00 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 22:57:20 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função calloc em C é utilizada para alocar e inicializar um bloco de
// memória contígua, retornando um ponteiro para essa região de memória.
// A função recebe dois parâmetros: o número de elementos a serem alocados
// e o tamanho de cada elemento. A diferença chave entre a função calloc
// e a função malloc é que o calloc inicializa todos os bytes da memória
// alocada com zero. Isso é útil quando se precisa de uma área de memória
// limpa e pronta para ser usada. O ponteiro retornado pela função calloc
// pode ser usado para acessar e manipular os elementos alocados.

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			bt;
	size_t			i;

	bt = nmemb * size;
	ptr = malloc(bt);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < bt)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
