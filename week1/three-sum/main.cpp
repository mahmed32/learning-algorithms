#include <iostream>
#include <ctime>

#define x 10000

unsigned int do_brute_force(int* a, unsigned int n);
int main(void)
{
    /* brute force */
    int a[x] = {};
    clock_t t = clock();
    do_brute_force(a, x);
    t = (clock() - t);
    std::cout << double(t)/CLOCKS_PER_SEC << std::endl;

    return 0;
}

unsigned int do_brute_force(int* a, unsigned int n)
{
    unsigned int c;

    c = 0;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n;j++)
            for(int k = j+1; k < n; k++)
                if(a[i] + a[j] + a[k] == 0) c++; /* this might overflow */
    return c;
}
