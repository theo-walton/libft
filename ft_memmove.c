/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:03:33 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:03:34 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *temp;

	temp = (unsigned char*)malloc(sizeof(temp) * len);
	if (temp == NULL)
	{
		free(temp);
		return (dst);
	}
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	free(temp);
	return (dst);
}
