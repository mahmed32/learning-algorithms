#include <cstdio>
#include "../union-find.h"
int main(int argc, char** argv)
{
    int pi, pj, n;
    //open the file
    printf("enter the number of objects\n");
    scanf("%d", &n);
    
    uf u(n);


    //do algorithm
    while(1)
    {
        scanf("%d%d", &pi, &pj);
        if(!u.connected(pi, pj))
        {
           u.munion(pi, pj);
           printf("%d %d\n", pi, pj);
        }
    }
    return 0;
}
