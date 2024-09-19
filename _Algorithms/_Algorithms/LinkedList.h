#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"

class LinkedList
{
public:
    Node *head;
    
public:
    //default constructor:
    LinkedList();
    void display();
    void addNode(int m);
    void insertNode(int num);
    void append(int m);
    //deconstructor is to get rid of an entire linked list after done using it:
    //deleting a node is just one node and uses another algorithmn.
    ~LinkedList();
};
#endif
