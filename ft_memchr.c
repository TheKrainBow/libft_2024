/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:36:42 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 18:19:20 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*buffer;
	size_t				i;

	i = 0;
	buffer = s;
	while (buffer && i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)buffer + i);
		i++;
	}
	return (NULL);
}
