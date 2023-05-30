/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:52:08 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/18 17:05:17 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica se um caractere é uma letra do alfabeto ou um dígito decimal.

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	else
		return (0);
}
