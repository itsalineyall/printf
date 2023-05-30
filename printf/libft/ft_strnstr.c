/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:34:14 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:00:39 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*A função strnstr() procura a primeira ocorrência de uma
substring dentro de uma string, limitando a busca aos
primeiros n caracteres da string principal. Se a substring
for encontrada, a função retorna um ponteiro para a posição
da primeira ocorrência dentro da string principal. Caso
contrário, a função retorna NULL. Essa função é uma
extensão do strstr() que permite a busca limitada em
uma quantidade específica de caracteres.*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
