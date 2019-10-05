/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:07:16 by jcampos-          #+#    #+#             */
/*   Updated: 2019/10/05 18:11:15 by jcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(char x, char y)
{
	char a;
	char b;
	char c;
	int l;
	int h;

	a = 'A';
	b = 'B';
	c = 'C';
	l = 0;
	h = 0;
	
	while(l <= x && h <= y) 
	{
		while(h == 0 || h == y)
		{
			if(l == 0 )
			{
				//putchar A
				//l++
			}
			else if(l == x)
			{
				//putchar C
				//l=0
				//h++
			}
			else //putchar B
				//l++
		}
		while (h =! 0 && h =! y)
		{
			
		}
