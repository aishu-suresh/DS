#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node*left, *right;
};
struct node*newnode(int item)
{
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->key=item;
temp->left=temp->right=NULL;
return temp;
}
void preorder(struct node*root)
{
if(root!=NULL)
{
printf("%d\n",root->key);
preorder(root->left);
preorder(root->right);
}
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\n",root->key);
inorder(root->right);
}
}
void postorder(struct node*root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d\n",root->key);
}
}
struct node*insert(struct node*node,int key)
{
if(node==NULL)
return newnode(key);
if(key<node->key)
node->left=insert(node->left,key);
else if(key>node->key)
node->right=insert(node->right,key);
return node;
}
void main()
{
struct node*root=NULL;
clrscr();
root=insert(root,50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
printf("Preorder traversal of binary search tree\n");
preorder(root);
printf("Inorder traversal of binary search tree\n");
inorder(root);
printf("Postorder traversal of binary search tree\n");
postorder(root);
getch();
}
