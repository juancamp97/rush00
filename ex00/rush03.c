/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:07:16 by jcampos-          #+#    #+#             */
/*   Updated: 2019/10/05 19:43:15 by jcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cond1(int x, int l, int h);
void	cond2(int x, int l, int h);

void	rush(int x, int y)
{
	int l;
	int h;

	l = 1;
	h = 1;
	
	while(l <= x && h <= y) 
	{
		while(h == 1 || h == y)
		{
			cond1(x, l, h);
		}
		while (h =! 1 && h =! y)
		{
			cond2(x, l, h)
		}
	}

void 	cond1(int x, int l, int h)
{
	if(l == 1 )
	{
		ft_putchar('A');				//putchar A
		l++;							//l++
	}
	else if(l == x)	
	{
		ft_putchar('C');				//putchar C
		l = 1;							//l=1
		h++;							//h++
	}
	else 
	{
		ft_putchar('B');				//putchar B
		l++;							//l++
	}
}

void 	cond2(int x, int l, int h)
{
	if( l == 1)
	{
		ft_putchar('B');
		l++;
	}
	else if( l == x )
	{
		ft_putchar('B');
		l = 1;
		h++;
	}
	else
	{
		ft_putchar(' ');
		l++;
	}
}

