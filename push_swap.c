/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:13:04 by tsirirak          #+#    #+#             */
/*   Updated: 2022/12/25 01:37:44 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int gc, char **gv)
{
	int	i;
	int	j;
	t_ps	s;

	i = 0;
	j = 0;
	if (gc > 3)
	{
		check_type(&s,gv);
	}
		printf("Error\n");
}

int 	

int	check_type(t_ps *s,char **gv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (gv[i])
		{
			while (gv[i][j] < '0' && gv[i][j] > '9')
			{
				printf("Error int");
				exit(1);
				j++;
			}
			s->num[i] = ft_atoi(gv[i]);
			printf("s->num[%d] = %d\n", s->num[i]);
			i++;
		}
}

