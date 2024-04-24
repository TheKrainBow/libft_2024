/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:42:46 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 18:49:27 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	const char	*start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	start = s1;
	while (*s1)
		s1++;
	s1--;
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1--;
	if (s1 < start)
		return (ft_strdup(""));
	return (ft_substr(start, 0, s1 - start + 1));
}
