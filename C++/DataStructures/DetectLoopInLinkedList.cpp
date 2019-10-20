// C++ program to detect loop in a linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int detectloop(Node *list)
{
    Node *slow_ptr = list, *fast_ptr = list;
    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if (slow_ptr == fast_ptr)
        {
            cout << "Found Loop";
            return 1;
        }
    }
    return 0;
}

/* Driver code*/
int main()
{
    Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    head->next->next->next->next = head;
    detectloop(head);
    return 0;
}