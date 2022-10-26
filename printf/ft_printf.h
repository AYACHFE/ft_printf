/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:33:48 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/25 16:24:33 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_puthex(unsigned int nb, char *base);
int	ft_putnbr(long nb);
int	ft_putchar(int c);
int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putadress(unsigned long nb);
int	ft_unsigned(unsigned long n);

#endif