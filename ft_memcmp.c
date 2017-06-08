/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:01:26 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:01:27 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t				i;

	i = n;
	string1 = s1;
	string2 = s2;
	while (*string1 == *string2 && i != 0)
	{
		string1++;
		string2++;
		i--;
	}
	if (i != 0)
		return (*string1 - *string2);
	return (0);
}
