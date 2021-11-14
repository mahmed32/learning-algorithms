#include "linked-list.h"

linked_list::linked_list(int data)
    :
    head(nullptr), tail(nullptr)
{
    head = new node{data, nullptr};
    tail = head;
}

void linked_list::attach(linked_list* another)
{
   tail->next = another->head;
   tail = another->tail;
   another->head = another->tail = nullptr; 
}

linked_list::~linked_list()
{
    while(head)
    {
        node* next = head->next;
        delete head;
        head = next;
    }
}

