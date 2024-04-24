/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:41:04 by krain             #+#    #+#             */
/*   Updated: 2024/04/23 20:28:31 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(const char *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		word++;
		while (*s && *s != c)
			s++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**dest;
	char const	*start;
	size_t		i;

	dest = malloc(sizeof(char *) * (count_word(s, c) + 1));
	i = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		start = s;
		while (*s && *s != c)
			s++;
		dest[i] = ft_substr(start, 0, s - start);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
