/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:16:08 by alinevieira       #+#    #+#             */
/*   Updated: 2023/05/12 22:57:37 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_putchar_fd é uma função personalizada que escreve um único
// caractere em um descritor de arquivo especificado. Ela utiliza a função
// write para realizar a operação de escrita. Essa função é útil para
// redirecionar a saída de caracteres para um arquivo específico, permitindo
// gravar caracteres em um local determinado, como um arquivo de saída, em vez
// de exibir na saída padrão.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
