/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:07:16 by jcampos-          #+#    #+#             */
/*   Updated: 2019/10/05 22:23:10 by jcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	si(int l, int h, int y, int x);

void	rush(int x, int y)
{
	int l;
	int h;

	l = 1;
	h = 1;
	while (h <= y)
	{
		while (l <= x)
		{
			si(l, h, y, x);
			l++;
		}
		l = 1;
		h++;
	}
}

void	si(int l, int h, int y, int x)
{
	if ((h == 1 && l == 1) || (h == y && l == 1))
		ft_putchar('A');
	else if ((h == 1 && l == x) || (h == y && l == x))
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if ((h == 1 && !(l == 1 || l == x)) || (h == y && !(l == 1 || l == x)))
		ft_putchar('B');
	else if (l == 1 && !(h == 1 || h == y))
		ft_putchar('B');
	else if (l == x && !(h == 1 || h == y))
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else
		ft_putchar(' ');
}
