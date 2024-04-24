/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:42:46 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 18:43:06 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	n_checker;

	n = (unsigned char)n;
	if (!big)
		return (NULL);
	if (!little || !*little)
		return ((char *)big);
	n_checker = 0;
	while (*big && n_checker < n + 1)
	{
		n_checker++;
		i = 0;
		while (big[i] && big[i] == little[i] && n_checker + i < n + 1)
			i++;
		if (!little[i])
			return ((char *)big);
		big++;
	}
	return (NULL);
}
