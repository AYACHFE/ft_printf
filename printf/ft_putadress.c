/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:10:40 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/25 16:25:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		count += ft_putadress(nb / 16);
		count += ft_putadress(nb % 16);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("%p\n", &a);
//     ft_printf("%p",&a);
// }