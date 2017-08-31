#include <stdio.h>
#include <stdlib.h>
#include "../day13/ex03/btree_apply_suffix.c"

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

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_suffix(root->left, applyf);
	if (root->right)
		btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}

void apply(void *item)
{
	if (item)
		printf("%s\n", item);
}

int	main(int argc, char *argv[])
{
	argc++;
	t_btree *node;
	node = btree_create_node("42");
	btree_apply_suffix(node, &apply);
}
