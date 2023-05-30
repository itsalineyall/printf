/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:09:25 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/18 18:20:54 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica se um caractere é imprimível ou não
// Na tabela ASCII, os caracteres imprimíveis estão
// localizados na faixa de números de 32 a 126 (decimal)

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
