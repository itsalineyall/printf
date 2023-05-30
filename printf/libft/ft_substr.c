/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:35:39 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:13:57 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//A função substr é usada para obter uma substring de
//uma string existente, definida por uma posição de
//início e um número de caracteres. É útil para
//manipulação e extração de dados de strings em
//programas e está presente em muitas linguagens
//de programação.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = ft_strdup("");
		return (sub);
	}
	if (len > (size_t)ft_strlen(s) - (size_t)start)
		len = (size_t)ft_strlen(s) - (size_t)start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
