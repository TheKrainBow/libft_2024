/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:38:35 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 12:36:46 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *p1, const void *p2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = p1;
	src = p2;
	if (dest < src + n && dest > src)
	{
		i = 1;
		while (i < n + 1)
		{
			dest[n - i] = src[n - i];
			i++;
		}
	}
	else
		ft_memcpy(p1, p2, n);
	return (p1);
}
