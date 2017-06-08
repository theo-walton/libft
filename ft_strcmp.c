/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:09:13 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 16:09:14 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

int				ft_strcmp(const char *s1, const char *s2)
{
	return (ft_memcmp(s1, s2, min(ft_strlen(s1), ft_strlen(s2))));
}
