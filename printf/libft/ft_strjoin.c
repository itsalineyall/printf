/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 22:59:18 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/12 23:09:43 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (size_t)ft_strlen(s1) + (size_t)ft_strlen(s2) + 1;
	newstr = (char *)malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < (size_t)ft_strlen(s1))
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (size_t)ft_strlen(s2))
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}
