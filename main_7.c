#include "functii.h"

int main()
{
	int cereri[9]={10, 4, 29, 15, 44, 32, 36, 40, 39}, i;
	Node *root, *p, *c;
	for(i=0;i<9;i++)
	{
		root=insert(root,cereri[i]);
	}
	preorder(root);
///am creat arborele citind valorile din vector (1.c))
    printf("\nRotatie: \n");
	p=search(root,32);
	c=search(root,36);
	p->right=RLRotation(c);
	preorder(root);
	printf("\nRotatie: \n");
	p=search(root,44);
	c=search(root,32);
	p->left=leftRotation(c);
	preorder(root);
	printf("\nRotatie: \n");
	p=search(root,29);
	c=search(root,44);
	p->right=rightRotation(c);
	preorder(root);
	printf("\nRotatie: \n");
	p=search(root,10);
	c=search(root,29);
	p->right=leftRotation(c);
	preorder(root);
	printf("\nRotatie: \n");
	p=search(root,39);
	c=search(root,10);
	root=leftRotation(c);
	preorder(root);
	printf("\nRotatie: \n");
	p=search(root,39);
	c=search(root,10);
	p->left=leftRotation(c);
	preorder(root);
	printf("\nArborele este echilibrat?\n");
    printf("Am terminat de rotit nodurile cu succes! (1.d))\n");
    printf("Cat este 70 la suta din 300? \n");
    printf("%d\n",3*70);
    
	return 0;
	
}
