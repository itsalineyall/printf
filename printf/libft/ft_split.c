/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:31:27 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:03:09 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_split é responsável por alocar e retornar um
// array de strings resultante da divisão de uma string de entrada
// em substrings, utilizando um caractere delimitador. A função
// percorre a string de entrada e aloca a memória necessária para
// armazenar cada substring. Em seguida, copia os caracteres da string
// de entrada correspondentes à substring para o array alocado, adicionando
// o caractere nulo ao final da string. Por fim, adiciona um ponteiro nulo
// para finalizar o array de strings. Se ocorrer algum erro na alocação
// de memória, a função retorna NULL.

static int	ft_countwords(char const *str, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str [i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static char	*ft_wordcpy(char const *s, char c)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (array == NULL || s == NULL)
		return (NULL);
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[j] = ft_wordcpy(&s[i], c);
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	array[j] = 0;
	return (array);
}
