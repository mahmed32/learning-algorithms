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

int uf::find(int d)
{
    if(d>nElements || d <= 0)
        throw "kosomak";
    int cur_ind = pairs[d-1].index;
    while(pairs[cur_ind].ll == nullptr)
        cur_ind = pairs[cur_ind].index;
    return cur_ind;
}

uf::~uf()
{
    for(int i = 0; i < nElements; i++)
    {
        delete pairs[i].ll;
    }
    delete pairs;
}
