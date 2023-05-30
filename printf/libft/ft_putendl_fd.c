/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:54:36 by alinevieira       #+#    #+#             */
/*   Updated: 2023/05/12 22:58:38 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_putendl_fd é uma função da biblioteca de manipulação
// de strings em C que imprime uma string seguida por uma nova
// linha em um arquivo especificado. Ela recebe como parâmetros
// a string a ser impressa e o descritor de arquivo onde a saída
// será redirecionada. 

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
