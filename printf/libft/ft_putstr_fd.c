/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:45:03 by alinevieira       #+#    #+#             */
/*   Updated: 2023/05/12 23:02:33 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_putstr_fd é responsável por escrever uma string em
// um descritor de arquivo especificado. Ela utiliza a função
// write para realizar a operação de escrita. O resultado é a
// exibição da string no local associado ao descritor de
// arquivo, como a saída padrão (stdout) quando o fd é igual a 1.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
