/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:49:10 by twalton           #+#    #+#             */
/*   Updated: 2017/06/07 15:49:12 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	logic(int n, int digits, int sign, char *str)
{
	if (str == NULL)
		return ;
	if (sign)
	{
		str[0] = '-';
		n = -n;
	}
	str[digits + sign] = '\0';
	while (n)
	{
		str[digits + sign - 1] = n % 10 + '0';
		n = n / 10;
		digits--;
	}
}

char		*ft_itoa(int n)
{
	int		digits;
	int		temp;
	char	*str;
	int		sign;

	sign = 0;
	temp = n;
	digits = 0;
	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (temp)
	{
		temp = temp / 10;
		digits++;
	}
	if (n < 0)
		sign = 1;
	str = malloc(sizeof(char) * (digits + sign + 1));
	logic(n, digits, sign, str);
	return (str);
}
