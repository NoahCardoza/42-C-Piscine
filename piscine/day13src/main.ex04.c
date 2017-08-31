#include <stdio.h>
#include <stdlib.h>
#include "../day13/ex04/btree_insert_data.c"

#define MAX(x, y) (x ^ ((x ^ y) & - (x < y)))

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *), int lvl, char dir)
{
	printf("%d (%c): ", lvl++, dir);
	(*applyf)(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf, lvl, 'L');
	if (root->right)
		btree_apply_prefix(root->right, applyf, lvl, 'R');
}

void apply(void *item)
{
	if (item)
		printf("%s\n", item);
}

int		ft_strcmp(void *sv1, void *sv2)
{
	int i;
	char *s1 = sv1;
	char *s2 = sv2;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	argc++;
	t_btree *node;
	node = btree_create_node("42");
	btree_insert_data(&node, "38", &ft_strcmp);
	btree_insert_data(&node, "24", &ft_strcmp);
	btree_insert_data(&node, "24", &ft_strcmp);
	btree_insert_data(&node, "38", &ft_strcmp);
	btree_insert_data(&node, "24", &ft_strcmp);
	btree_insert_data(&node, "38", &ft_strcmp);
	btree_insert_data(&node, "38", &ft_strcmp);
	btree_insert_data(&node, "21", &ft_strcmp);
	btree_insert_data(&node, "21", &ft_strcmp);
	btree_insert_data(&node, "21", &ft_strcmp);
	btree_insert_data(&node, "38", &ft_strcmp);
	btree_apply_prefix(node, &apply, 1, 'S');
}
