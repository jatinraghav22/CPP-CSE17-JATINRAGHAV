#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *start, *new_node;

struct node* create_node(int item)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->next = NULL;
    return new_node;
}

void push()
{
    struct node *ptr;
    int item;
    cout << "Enter the element to be inserted at the beginning: ";
    cin >> item;
    ptr=create_node(item);
    if (ptr==NULL)
    {
        cout << "Memory Alloation failed";
    }
    else
    {
        if (start == NULL)
        {
            start = ptr;                                          // When the list is empty
            start->next = NULL;
            cout<< "Element inserted at the beginning\n";
        }
        else
        {
            ptr->next = start;
            start = ptr;
            cout << "Element inserted at the beginning\n";       // When the list contains some elements
        }

    }
}
void pop()
{
    struct node*ptr;
    if(start==NULL)
    {
        cout<<"linked list is empty";
    }
    else if(start->next==NULL)
    {
        cout<<start->data;
        free(start);
    }
    else{
        ptr=start;
        start=start->next;
        cout<<ptr->data;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        cout << "The elements in the list are: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}
int main()
{
    int choice;
    start = NULL;
    while (1)
    {
        cout << "****** WELCOME TO LINKED LISTS ******\n\n1. push.\n\n2. Display the linked list.\n\n3.pop\n\n 4.Exit\n\nEnter your choice:\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice";
        }
    }
    return 0;
}