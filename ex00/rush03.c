/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:07:16 by jcampos-          #+#    #+#             */
/*   Updated: 2019/10/06 20:34:41 by dcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	no(int h, int y);

void	si(int l, int h, int y, int x);

void	rush(int x, int y)
{
	int l;
	int h;

	l = 1;
	h = 1;
	if (x == 1)
		no(h, y);
	else
	{
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

void	no(int h, int y)
{
	while (h <= y)
	{
		if (h == 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else if (h == y)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		h++;
	}
}
