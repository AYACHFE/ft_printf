/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:54:51 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/25 16:27:40 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char *base)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, base);
		count += ft_puthex(nb % 16, base);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}
// int main()
// {
// 	printf("%x\n", -1);
// 	ft_puthex(-1, "0123456789abcdef");
// }