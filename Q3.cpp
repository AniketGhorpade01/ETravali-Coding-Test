//3.Write a program to print the nodes present in the Circular LinkedList
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
 

void push(Node **ref, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *ref;
    ptr1->data = data;
    ptr1->next = *ref;
    if (*ref != NULL)
    {
        while (temp->next != *ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; 
 
    *ref = ptr1;
}
 
void printList(Node *head) 
{
    Node *temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != head);
    }
}
 

int main()
{
    
    Node *head = NULL;
    int n;
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
  
 
    cout << "Display for Circular Linked List\n ";
    printList(head);
 
    return 0;
}
