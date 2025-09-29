#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start, *new_node;

struct node* create_node(int item)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void insert_beg()
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
            start = ptr;
            start->prev = NULL;                                          // When the list is empty
            start->next = NULL;
            cout<< "Element inserted at the beginning\n";
        }
        else
        {
            ptr->next = start;
            start->prev = ptr;
            start = ptr;
            cout << "Element inserted at the beginning\n";       // When the list contains some elements
        }
        
    }
}

void insert_end()
{
    struct node *ptr, *temp;
    int item;
    cout << "Enter the element to be inserted at the end: ";
    cin >> item;
    ptr = create_node(item);
    if (ptr == NULL)
    {
        cout << "Memory Alloation failed";
    }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;                                   // When the list contains some elements
            ptr->next = NULL;
            cout << "Element inserted at the end\n";
        }
        
}

// void insert_after()
// {
//     struct node *ptr, *temp;
//     int item, loc, i;
//     cout << "Enter the location after which you want to insert an element: ";
//     cin >> loc;
//     cout << "Enter the element to be inserted: ";
//     cin >> item;
//     ptr = create_node(item);
//     if (ptr == NULL)
//     {
//         cout << "Memory Alloation failed";
//     }
//     else
//     {
//         temp = start;
//         for (i = 0; i < loc; i++)
//         {
//             temp = temp->next;
//             if (temp == NULL)
//             {
//                 cout << "There are less than " << loc << " elements";
//                 return;
//             }
//         }
//         ptr->next = temp->next;                                  // When the list contains some elements
//         temp->next = ptr;
//         cout << "Element inserted after location " << loc << "\n";
//     }
// }

// void del_beg()
// {
//     struct node *ptr;
//     if (start == NULL)
//     {
//         cout << "List is empty";
//         return;
//     }
//     else
//     {
//         ptr = start;
//         start = start->next;
//         cout << "Element deleted at the beginning\n" << ptr ->data;
//         free(ptr);
//     }

// }

// void del_end()
// {
//     struct node *ptr,*temp;
//     if(start==NULL)
//     {
//         cout << "List is empty";
//     }
//     else
//     {
//         if(start->next==NULL)
//         {
//             ptr=start;
//             start = NULL;
//             cout << "element deleted at end" << ptr ->data;
//             free(ptr);
//         }
//         else
//         {   ptr=start;
//             while(ptr->next != NULL)
//             {
//                 temp=ptr;
//                 ptr = ptr -> next;
//             }
//             temp->next =NULL;
//             cout << "element deleted at the end is" << ptr->data;
//             free(ptr);
//         }
//     }
// }

// void del_after()
// {
//     struct node *ptr, *temp;
//     int loc, i;
//     if (start == NULL)
//     {
//         cout << "List is empty";
//         return;
//     }
//     cout << "Enter the location after which you want to delete an element: ";
//     cin >> loc;
//     temp = start;
//     for (i = 1; i <= loc; i++)
//     {
//         temp = temp->next;
//         if (temp == NULL)
//         {
//             cout << "There are less than " << loc << " elements";
//             return;
//         }
//     }
//     ptr = temp->next;
//     if (ptr == NULL)
//     {
//         cout << "There is no element after location " << loc;
//         return;
//     }
//     temp->next = ptr->next;                                    
//     cout << "Element deleted after location " << loc << " is " << ptr->data << "\n";
//     free(ptr);
// }

// void count_nodes()
// {
//     struct node *ptr;
//     int count = 0;
//     ptr = start;
//     while (ptr != NULL)
//     {
//         count++;
//         ptr = ptr->next;
//     }
//     cout << "Number of nodes in the list: " << count << "\n";
// }


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
        cout << "---------WELCOME TO LINKED LISTS---------\n\n1. Insert at beginning.\n\n2. INSERT AT END.\n\n3. Insert at desired position.\n\n4. Deletion at Begining.\n\n5. Deletion at end\n\n6. Deletion at desired position.\n\n7. COUNT NO. OF NODES.\n\n8. Display the linked list.\n\n9. Exit\n\nEnter your choice:\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        // case 3:
        //     insert_after();
        //     break;
        // case 4:
        //     del_beg();
        //     break;
        // case 5:
        //     del_end();
        //     break;
        // case 6:
        //     del_after();
        //     break;
        // case 7:
        //     count_nodes();
        //     break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
        default:
            cout << "Invalid choice";
        }
    }
    return 0;
}