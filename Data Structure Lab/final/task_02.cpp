#include <bits/stdc++.h>

using namespace std;

struct node{
    char data;
    struct node* left, *right;

};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
	}
}


void print_preorder(struct node * root)
{
    if (root)
    {
        cout<<root->data<<endl;
        print_preorder(root->left);
        print_preorder(root->right);
    }

}

void print_postorder(struct node * root)
{
    if (root)
    {
        print_postorder(root->left);
        print_postorder(root->right);
        cout<<root->data<<endl;
    }
}

struct node* insert(struct node* node, int key)
{
	
	if (node == NULL) return newNode(key);

	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);

	return node;
}

int main()
{
    struct node *root = NULL;
	root = insert(root, 'A');
	insert(root, 'B');
	insert(root, 'O');
	insert(root, 'C');
	insert(root, 'E');
	insert(root, 'F');

	cout<<"Pre-Order \n";
	print_preorder(root);


    cout<<endl;
    
	cout<<"In-order"<<endl;
	inorder(root);
	cout<<"\n\n"<<"Post Order \n";
	print_postorder(root);

    return 0;
}