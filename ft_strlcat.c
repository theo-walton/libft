/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:13:31 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:13:32 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*destend;
	const char	*source;
	size_t		i;
	size_t		destlen;

	destlen = ft_strlen(dst);
	i = size - destlen - 1;
	source = src;
	destend = dst + destlen;
	while (*source && i)
	{
		*destend = *source;
		destend++;
		source++;
		i--;
	}
	*destend = '\0';
	return (ft_strlen(dst));
}
