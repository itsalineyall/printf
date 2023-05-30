/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:23:32 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:05:06 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_striteri é uma função personalizada que itera sobre uma
// string e aplica uma função de modificação a cada caractere. Ela
// recebe como argumentos a string s e a função f, que é chamada
// para cada caractere da string, passando o índice do caractere como
// primeiro argumento. A função f pode modificar os caracteres da string
// se necessário.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
