#include <ctime>
#include <cstdio>

int main()
{
    int i;
    unsigned long long n;
    clock_t t;

    scanf("%lu", &n);

    t = clock();
    i = 0;
    while(i < n)
    {
        i++;
    }
    t = clock() - t;

    printf("%f\n", double(t)/ CLOCKS_PER_SEC);

    return 0;
}
