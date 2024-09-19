#ifndef Node_h
#define Node_h
struct Node //this can be class or struct.
{
public: //to access these inside linked list class they need to be public not private.
    int data;
    Node* next;
    
public:
    Node();
    //default constructor for each Node in a
    //linked list.
    //each Node created will have a data variable of 0 and a next pointer of NULL.
};
#endif
