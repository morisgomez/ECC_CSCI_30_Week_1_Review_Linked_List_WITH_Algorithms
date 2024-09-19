#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
}

//FUNCTION #1: to add a new Node at the front of the Linked List:
void LinkedList::addNode(int m)
{
    Node *n = new Node;
    n->data = m;
    if(head != NULL)
    {
        n->next = head;
        head = n;
    }
    else
    {
        head = n;
        n->next = NULL;
    }
} //end addNode function.

//FUNCTION #2: to add a node b/w 2 other Nodes:
void LinkedList::insertNode(int num)
{
    Node *n = new Node;
    n->data = num;
    Node *current;
    Node *preNode;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        current = head;
        preNode = NULL;
        while(current != NULL && current->data < num)
        {
            preNode = current;
            current = current->next;
        }
        if(preNode == NULL)
        {
            head = n;
            n->next = current;
        }
        else
        {
            preNode->next = n;
            n->next = current;
        }
        cout << endl << endl << "NODE WITH THE VALUE " << num << " HAS BEEN INSERTED." << endl << endl << endl;
    }
} //end insertNode function.

//FUNCTION #3: to append a new Node to end of Linked List:
void LinkedList::append(int m)
{
    Node *n = new Node;
    n->data = m;
        
    Node *current;
        
    if (head != NULL)
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = n;
    }
    else
    {
        head = n;
    }
} //end append function.

//FUNCTION #4: to display Linked List:
void LinkedList::display()
{
    Node *current = head;
    int counter = 1;
    while(current != NULL)
    {
        cout << "this is Node " << counter << " with address of: " << current << endl;
        cout << "Node " << counter << " has 'data' value of: " << current->data << endl;
        cout << "Node " << counter << " has 'next' value of: " << current->next << endl;
        cout << "----------------" << endl;
        current = current->next;
        counter = counter + 1;
    } //end while loop.
} //end display function.

LinkedList::~LinkedList()
{
    Node* current;
    current = head;
    while(current != NULL)
    {
        Node* n = current->next;
        delete current;
        current = current->next;
    }
}
