#include "test.h"

void	init(t_te *t)
{
	t->a = 5;
	t->b = 6;
	t->c = 7;
}

int	main(void)
{
	t_te arai;
	t_te wa;

	arai.a = 1;
	arai.b = 2;
	arai.c = 3;

	printf("a = %d\n",arai.a);
	printf("b = %d\n",arai.b);
	printf("c = %d\n",arai.c);

	arai.size.x = 7;
	arai.size.y = 8;
	printf("x = %d\n",arai.size.x);
	printf("y = %d\n",arai.size.y);


	// t_te2	*t1;
	// t_te2	*t2;
	// t_te2	*t3;
	// t_te2	*temp;

	// t1 = (t_te2 *)malloc(sizeof(t_te2));
	// t1->d = 20;
	// t1->next = NULL;

	// t2 = (t_te2 *)malloc(sizeof(t_te2));
	// t2->d = 30;
	// t2->next = NULL;

	// t3 = (t_te2 *)malloc(sizeof(t_te2));
	// t3->d = 40;
	// t3->next = NULL;

	// t1->next = t2;
	// t2->next = t3;
	// t3->next = NULL;
	// temp = t1;
	// printf("temp = %d\n",temp->d);
	// // printf("d = %d\n",t1->d);
	// int i = 1;
	// while (temp != NULL)
	// {
	// 	printf("d %d = %d\n",i,temp->d);
	// 	temp = temp->next;
	// 	i++;
	// }
	// printf("i = %d\n",i);
	// // printf("teamp->next = %d\n",temp->d);
}
