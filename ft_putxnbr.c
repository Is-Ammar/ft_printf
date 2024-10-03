/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:33:04 by iammar            #+#    #+#             */
/*   Updated: 2024/10/03 21:22:52 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxnbr(unsigned int n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n < 16)
	{
		count += ft_putchar(hex[n]);
	}
	else
	{
		count += ft_putxnbr(n / 16);
		count += ft_putxnbr(n % 16);
	}
	return (count);
}
