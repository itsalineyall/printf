/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 23:58:12 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/29 18:13:09 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função strrchr() é uma função da linguagem de programação C que
// busca a última ocorrência de um caractere específico em uma string.
// A função recebe dois argumentos: um ponteiro para uma string
// (representada como um array de caracteres) e um caractere a
// ser procurado.

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[j]);
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}
