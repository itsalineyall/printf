/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:19:07 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/26 18:19:28 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int nb)
{
	int count;

	count = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		count += 1;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long int	nb;
	int	count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		count += 1;
	}
	count = ft_count(nb) + count;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (count);
}