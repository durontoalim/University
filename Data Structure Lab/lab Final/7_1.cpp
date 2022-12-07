 //Create a linked list. Already it is given in the course materials. Now insert one new element in last position and print the all data of the linked list.

#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	head->data = 10; 
	head->next = second;  

	second->data = 20;
	
	second->next = third;
	third->data = 30; 
    third->next = fourth;

    int i_list;

    cout<<"Insert a new element : "<<endl;
    cin>>i_list;

	fourth->data = i_list;
	fourth->next = NULL;


	cout<<head->data<<" "<<second->data<<" "<<third->data<<" "<<fourth->data<<endl;


	return 0;
}