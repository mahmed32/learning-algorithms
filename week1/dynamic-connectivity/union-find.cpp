#include "union-find.h"
#include <cassert>

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

void uf::munion(int a, int b)
{
    int ind_a, ind_b;

    ind_a = find(a);
    ind_b = find(b);

    if(ind_a == ind_b) return; //they are already connected

    pairs[ind_a].ll->attach(pairs[ind_b].ll);
    pairs[ind_b].index = ind_a;

    assert(pairs[ind_b].ll->head == nullptr);
}

int uf::find(int d)
{
    if(d>nElements || d <= 0)
        throw "kosomak";
    int cur_ind = pairs[d-1].index;
    while(pairs[cur_ind].ll->head == nullptr)
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
