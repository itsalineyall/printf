/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:20:33 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:17:23 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_strtrim remove os caracteres especificados em um
// conjunto set do início e do final de uma string s1. Ela
// percorre a string s1 em busca dos caracteres do conjunto
// set no início da string e os remove, em seguida percorre a
// string em busca dos mesmos caracteres no final da string e
// também os remove. O resultado é uma nova string alocada
// dinamicamente contendo a string s1 sem os caracteres do
// conjunto set no início e no final da string. Se a alocação
// de memória falhar, a função retorna NULL.

char	*ft_strtrim(char const *s1, char const *set)
{
	int		inicio;
	int		final;
	char	*str;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	inicio = 0;
	final = ft_strlen(s1) - 1;
	while (inicio <= final && ft_strchr(set, s1[inicio]) != NULL)
		inicio++;
	if (inicio > final)
		return (ft_strdup(""));
	while (final >= 0 && ft_strchr(set, s1[final]) != NULL)
		final--;
	len = final - inicio + 2;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[inicio], len);
	return (str);
}
