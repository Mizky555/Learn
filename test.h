#ifndef TEST_H
# define TEST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_vector
{
	int x;
	int y;
}t_vec;

typedef struct s_test
{
	int	a;
	int	b;
	int	c;
	t_vec player;
	t_vec map;
} t_te;

typedef struct s_test2
{
	int	d;
	in
	struct s_test2	*next;
} t_te2;

// void	init(int *i);

#endif
