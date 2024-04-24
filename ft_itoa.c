/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maagosti <maagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:33:43 by krain             #+#    #+#             */
/*   Updated: 2024/04/22 11:59:49 by maagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_size(long int n)
{
	int	size;

	if (n < 0)
		n *= -1;
	size = 1;
	while (n > 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	recursive_itoa(long n, int index, char *dest)
{
	dest[index] = n % 10 + '0';
	if (index > 0)
		recursive_itoa(n / 10, index - 1, dest);
}

char	*ft_itoa(int n)
{
	int		size;
	long	long_n;
	char	*dest;

	size = number_size(n);
	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		size++;
	}
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	dest[size] = 0;
	recursive_itoa(long_n, size - 1, dest);
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
