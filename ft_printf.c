/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:52:48 by iammar            #+#    #+#             */
/*   Updated: 2024/11/08 16:20:52 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases(const char **form, va_list args)
{
	if (**form == 'd' || **form == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (**form == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (**form == 'p')
		return (ft_putptr((unsigned long)va_arg(args, void *)));
	if (**form == 'u')
		return (ft_putunbr((unsigned int)va_arg(args, long)));
	if (**form == 'x')
		return (ft_putxnbr(va_arg(args, unsigned int)));
	if (**form == 'X')
		return (ft_put_xxnbr(va_arg(args, unsigned int)));
	if (**form == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	if (**form == '%')
		return (ft_putchar('%'));
	return (0);
}

static int	ft_process(const char *form, va_list args)
{
	int	len;

	len = 0;
	while (*form)
	{
		if (*form == '%')
		{
			form++;
			if (*form)
				len += ft_cases(&form, args);
		}
		else
		{
			len += ft_putchar(*form);
		}
		form++;
	}
	return (len);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		len;

	if (!form)
		return (-1);
	va_start(args, form);
	len = ft_process(form, args);
	va_end(args);
	return (len);
}
/*
//  int	main(void)
// {
// 	unsigned int a = 15;
// 	int b = 0x7802;
// 	char c = 'a';
// 	char *d = "abcdef";
// 	ft_printf("them\n%d\n\n",printf("orig:\n%c\n%s\n %p\n %i\n hexa; %d\n %u\n
			%X\n",
// c,d,
// d,
// a,b,a,a));
// 	ft_printf("mine\n%d\n ",ft_printf("mine:\n%c\n%s\n %p\n %i\n hexa; %d\n %u\n
			%X\n",
// c,
// d,d,a,
// b,a,a));
// 	return (0);
// }
*/