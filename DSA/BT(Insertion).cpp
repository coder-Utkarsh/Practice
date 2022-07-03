#include<stdio.h>
#include<stdlib.h>
// Inserting a node in a binary tree.
struct node{
	int data;
	struct node* left, *right;
};
struct node* createNode(struct node* root, int val)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->left = NULL;
	newNode->data = val;
	newNode->right = NULL;
	return newNode;
}
void Insert(struct node* root, int val)
{
	if(root == NULL)
	{
		root = createNode(root, val);
		return;
	}
	struct node* current = root;
	struct node* parent = NULL;
	while(current != NULL)
	{
		parent = current;
		if(val > current->data)
			current = current->right;
		else
			current = current->left;
		Insert(current, val);
	}
	if(val > parent->data)
		parent->right = createNode(root, val);
	else
		parent->left = createNode(root, val);
	return;
}
void Traverse(struct node* root)   // Inorder
{
	if(root == NULL)
	{
		printf("No data to display");
		return;
	}
	struct node* temp = root;
//	printf("\n");
	while(temp != NULL)
	{
		Traverse(temp->left);
		printf("%d ", temp->data);
		Traverse(temp->right);
	}
}
int main()
{
	struct node* root = NULL;
	int val;
	Traverse(root);
	for(int i=0;i<7;i++)
	{
		printf("\nEnter value: ");
		scanf("%d", &val);
		Insert(root, val);
		Traverse(root);
	}
}
