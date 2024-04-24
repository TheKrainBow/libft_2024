/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:42:46 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 18:45:23 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	c = (unsigned char)c;
	size = ft_strlen(s);
	while (size)
	{
		if (*(s + size) == c)
			return ((char *)s + size);
		size--;
	}
	if (*(s + size) == c)
		return ((char *)s + size);
	return (NULL);
}
