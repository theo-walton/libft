/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:16:37 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:16:38 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t x, size_t y, size_t z)
{
	if (x <= y && x <= z)
		return (x);
	if (y <= z && y <= x)
		return (y);
	return (z);
}

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp(s1, s2, min(ft_strlen(s1), ft_strlen(s2), n)));
}
