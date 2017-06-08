/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:51:54 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 15:51:54 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*memory;
	size_t			i;

	i = size;
	memory = (unsigned char*)malloc(sizeof(memory) * size);
	if (memory == NULL)
		return (NULL);
	while (i > 0)
	{
		memory[i - 1] = 0;
		i--;
	}
	return (memory);
}
