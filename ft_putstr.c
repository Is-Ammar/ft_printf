/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:50:56 by iammar            #+#    #+#             */
/*   Updated: 2024/11/06 17:12:07 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (count + ft_putstr("(null)"));
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}
