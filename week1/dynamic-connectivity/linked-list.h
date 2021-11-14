#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct node
{
    int data;
    node* next;
};
class linked_list
{
public:
    linked_list(int);
    ~linked_list();
    void attach(linked_list*);
public:
    node *head, *tail;
};
#endif
