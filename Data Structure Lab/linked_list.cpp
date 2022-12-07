#include <bits/stdc++.h>

using namespace std;



struct Node {
    int data;

    struct Node *next;
};

int main() {
    
    struct Node * head = NULL;
    struct Node * second = NULL;
    struct Node * third = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head ->data = 3;
    second ->data = 5;
    third ->data = 9;

    head ->next = second;
    second ->next = third;
    third -> next = NULL;

    cout<<head<<endl;
    cout<<head->data<<endl;
    cout<<head ->next<<endl<<endl;


    cout<<second<<endl;
    cout<<second ->data<<endl;
    cout<<second ->next<<endl<<endl;


    cout<<third<<endl;
    cout<<third -> data<<endl;
    cout<<third ->next<<endl<<endl;


    cout<<head<<" -> "<<head -> data <<" -> "<<head->next<<" -> "<<second<<" -> "<<second -> data <<" -> "<<second -> next<<" "<<third<<" -> "<<third -> data <<" -> "<<third->next<<" "<<endl;



     return 0;
}