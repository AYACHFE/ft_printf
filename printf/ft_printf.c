/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:25:34 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/26 14:54:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print(va_list list, char s)
{
	if (s == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (s == 'p')
	{
		ft_putstr("0x");
		return (2 + ft_putadress(va_arg(list, unsigned long)));
	}
	else if (s == 'd')
		return (ft_putnbr(va_arg(list, int)));
	else if (s == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (s == 'u')
		return (ft_unsigned(va_arg(list, unsigned int)));
	else if (s == 'x')
		return (ft_puthex(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (s == 'X')
		return (ft_puthex(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (s == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	list;

	count = 0;
	va_start(list, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += print(list, s[i]);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(list);
	return (count);
}

// int main()
// {
// 	printf("     %d",printf("%p",12345));
// 	printf("\n");
// 	ft_printf("     %d",ft_printf("%p",12345));
// }