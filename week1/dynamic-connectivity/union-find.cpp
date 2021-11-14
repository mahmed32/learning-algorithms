#include "union-find.h"

uf::uf(int n)
    :
    nElements(n)
{
    pairs = new pair[n]();
    for(int i = 0; i < n; i++)
    {
        pairs[i].index = i;
        pairs[i].ll = new linked_list(i+1);
    }
}

uf::~uf()
{
    for(int i = 0; i < nElements; i++)
    {
        delete pairs[i].ll;
    }
    delete pairs;
}
