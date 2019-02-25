
#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void    print_list(t_list *list)
{
	while (list)
	{
		printf("%s", list->data);
		list = list->next;
	}
}
void	print_str(void *data)
{
	printf("%s", data);
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if(*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

t_list *ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (0);
	list -> data = data;
	list -> next = NULL;
	return (list);
}

void 	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	if (current)
	{
		while ((current -> next))
			current = current -> next;
		current -> next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		list = ft_create_elem(data);
		list -> next = *begin_list;
		*begin_list = list;
	}
}

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current)
	{
		current = current -> next;
		i++;
	}
	return (i);
}

t_list *ft_list_last(t_list *begin_list)
{
	t_list *current;

	current = begin_list;
	if (current)
 	{
 		while (current -> next)
 		{
 			current = current -> next;
 		}
 	}
 	return (current);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list	*current;

	i = 0;
	current = 0;
	while  (i < ac)
	{
		ft_list_push_front(&current, av[i]);
		i++;
	}
	return (current);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	list = 0;
	while(*begin_list)
	{
		list = *begin_list;
		*begin_list = (*begin_list) -> next;
		free(list);
	}
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (begin_list)
	{
		if(i == nbr)
			return (begin_list);
		begin_list = begin_list -> next;
		i++;
	}
	return (0);
}

void ft_list_reverse(t_list **begin_list)
{
	t_list *temp;
	t_list *prev;
	t_list *next;

	temp = *begin_list;
	prev = NULL;
	while (temp)
	{
		next = temp -> next;
		temp -> next = prev;
		prev = temp;
		temp = next;
	}
	*begin_list = prev;
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list -> next;
	}
}

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list -> data, data_ref) == 0)
			f(begin_list -> data);
		begin_list = begin_list -> next;
	}
}

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list -> data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list -> next;
	}
	return (NULL);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *list;
	t_list *temp;

	list = *begin_list;
	while (list)
	{
		if (cmp(list -> data, data_ref) == 0)
		{
			if (list == *begin_list)
				*begin_list = list -> next;
			else
				prev->next = list->next;
			temp = list;
			list = list -> next;
			free (temp);
		}
		else
		{
			prev = list;
			list = list -> next;
		}
	}
}

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	if(list)
	{
		while (list -> next)
			list = list -> next;
		list -> next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *i;
	t_list *j;
	void *temp;

	i = *begin_list;
	if(!i)
		return ;
	j = i -> next;
	temp = 0;

	while (i)
	{
		j = i -> next;
		while (j)
		{
			if (cmp(i -> data, j -> data) > 0)
			{
				temp = i -> data;
				i -> data = j -> data;
				j -> data = temp;
			}
			j = j -> next;
		}
		i = i -> next;
	}
}

int main(int ac, char **av)
{
	t_list *list = 0;
	t_list *list4 = 0;
	t_list *list5 = 0;
	t_list *list7 = 0;
	t_list *list11 = 0;

	printf("==ex01==\n");
	ft_list_push_back(&list, "Hi\n"); //ex01
	ft_list_push_back(&list, "He\n"); //ex01
	ft_list_push_back(&list, "Ho\n"); //ex01
	print_list(list);

	printf("==ex02==\n");
	ft_list_push_front(&list, "HELLO\n"); //ex02
	print_list(list);

	printf("==ex03==\n");
	printf("%d\n", ft_list_size(list)); //ex03

	printf("==ex04==\n");
	list4 = ft_list_last(list);//ex04
	print_list(list4);//ex04

	printf("==ex05==\n");
	if (ac > 1)
	list5 = ft_list_push_params(ac, av); //ex05
	print_list(list5);//ex05
	printf("\n");
/*
	printf("==ex06==\n");
	ft_list_clear(&list);
	print_list(list5);
*/
	printf("==ex07==\n");
	list7 = ft_list_at(list, 2); //ex07
	printf("%s", list7->data);//ex07

	printf("==ex08==\n");
	ft_list_reverse(&list);//ex08
	print_list(list);//ex08

	printf("==ex09==\n");
	ft_list_foreach(list, &print_str);

	printf("==ex10==\n");
	ft_list_foreach_if(list, &print_str, "Hi\n", &ft_strcmp);

	printf("==ex11==\n");
	list11 = ft_list_find(list, "Ho\n", &ft_strcmp);
	printf("find: %s", list11->data);

	printf("==ex12==\n");
	ft_list_remove_if(&list, "Hi\n", &ft_strcmp);
	print_list(list);

	printf("==ex13==\n");
	ft_list_merge(&list, list5); //ex13
	print_list(list); //ex13
	printf("\n");

	printf("==ex14==\n");
	ft_list_sort(&list5, &ft_strcmp);
	print_list(list5);

	return (0);
}
