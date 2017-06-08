/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:18:55 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:18:56 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = size;
	str = malloc(sizeof(str) * size);
	if (str == NULL)
		return (NULL);
	while (i != 0)
	{
		str[i - 1] = '\0';
		i--;
	}
	return (str);
}
