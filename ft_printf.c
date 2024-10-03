/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:52:48 by iammar            #+#    #+#             */
/*   Updated: 2024/10/03 21:19:36 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(const char **form, va_list args)
{
	int	len;

	if (**form == 'd' || **form == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (**form == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (**form == 'p')
	{
		len = ft_putstr("0x");
		return (len + ft_putptr((unsigned long)va_arg(args, void *)));
	}
	if (**form == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
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

int	ft_process(const char *form, va_list args)
{
	int	len;

	len = 0;
	while (*form)
	{
		if (*form == '%')
		{
			form++;
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

	va_start(args, form);
	len = ft_process(form, args);
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	int a = 25;
// 	int b = 9;
// 	char c = 'a';
// 	char *d = "abcdef";
// 	printf("original:\n%c\n%s\n %p\n %d\n %i\n %u\n %X\n", c, d, d, a, b, a, a);
// 	ft_printf("mine:\n%c\n%s\n %p\n %d\n %i\n %u\n %X\n", c, d, d, a, b, a, a);
// 	return (0);
// }