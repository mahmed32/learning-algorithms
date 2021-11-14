#ifndef UNION_FIND_H
#define UNION_FIND_H
#include "linked-list.h"
struct pair
{
    int index;
    linked_list* ll;
};
class uf
{
public:
    uf(int);
    ~uf();
    void munion(int, int);
    bool connected(int, int);
private:
    int find(int);
    int count();
private:
    int nElements;
    pair* pairs;
};
#endif
