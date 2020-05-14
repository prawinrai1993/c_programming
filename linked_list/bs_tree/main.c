#include<stdio.h>
#include<stdlib.h>


struct bst{
	struct bst *left;
	int data;
	struct bst *right;
};


void insert(struct bst **,int);
void preorder(struct bst *);
void postorder(struct bst *);
void inorder(struct bst *root);
struct bst * search(struct bst *root,int data);


main()
{

struct bst *root=NULL;
int choice,data;
struct bst *temp=NULL;

while(1)
{
	printf("\n>>>>>>>>>>>>>>>>>>menu<<<<<<<<<<<<<<<<<<<<\n");
	printf("1: enter node\n2: preorder\n3: postorder\n4: inorder\n5: search\n6: quit\n\n");

printf("enter choice: ");
scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("enter data: ");
			scanf("%d",&data);
			insert(&root,data);
			break;
		case 2:preorder(root);
			break;
		case 3:postorder(root);
			break;
		case 4:inorder(root);
			break;
		case 5:printf("enter data to search: ");
			scanf("%d",&data);
			temp=search(root,data);
			if(temp==NULL)
			printf("data not found!!!!!\n\n");
			else
			printf("data found!!!!!!!!\n\n");
			break;
		case 6:printf("\n\napplication quiting!!!!!!!!!\n\n");
			exit(0);
			break;

		default: printf("invalid option entered!!!!!!!!!!!\n\n");

	}while(getchar()!=10);


}
}

void insert(struct bst **root,int data)
{
struct bst *nu=NULL;

if(*root==NULL)
{
	nu=calloc(1,sizeof(struct bst));

	if(nu==NULL)
	{
	printf("memory full!!!!!\n");
	return;
	}
	nu->data=data;
	*root=nu;
}
else if(data < (((*root)->data)))
insert(&((*root)->left),data);
else if(data>((*root)->data))
insert(&((*root)->right),data);
}


void preorder(struct bst *root)
{
if(root==NULL)
return;


printf("%d ",root->data);
preorder(root->left);
preorder(root->right);

}



void postorder(struct bst *root)
{
if(root==NULL)
return;


postorder(root->left);
postorder(root->right);
printf("%d ",root->data);

}


void inorder(struct bst *root)
{
if(root==NULL)
return;


postorder(root->left);
printf("%d ",root->data);
postorder(root->right);

}


struct bst * search(struct bst *root,int data)
{

if(root==NULL)
return NULL;
else if(data < root->data)
return search(root->left,data);
else if(data > root->data)
return search(root->right,data);
else
return root;

}


