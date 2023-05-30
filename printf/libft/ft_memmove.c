/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:30:51 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/24 13:56:39 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Permite copiar uma região de memória para outra,
// mesmo se as regiões se sobrepõem

static void	*ft_else(unsigned char *cdest, const unsigned char *csrc, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = (unsigned char *) dest;
	csrc = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (csrc < cdest)
	{
		while (n > 0)
		{
			n--;
			cdest[n] = csrc[n];
		}
	}
	else
		ft_else(cdest, csrc, n);
	return (dest);
}
