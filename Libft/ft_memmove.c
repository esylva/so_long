/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:52:57 by esylva            #+#    #+#             */
/*   Updated: 2021/04/25 13:55:06 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)malloc(sizeof(char) * (n));
	if (!a)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(a + i) = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(a + i);
		i++;
	}
	free (a);
	return (dest);
}
