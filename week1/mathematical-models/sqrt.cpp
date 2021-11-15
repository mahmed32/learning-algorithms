#include <ctime>
#include <cmath>
#include <cstdio>

int main()
{
    int i;
    double j;
    unsigned long long n;
    clock_t t;

    scanf("%lu", &n);

    t = clock();
    i = 0;
    j = 10234.12;
    while(i < n)
    {
        sqrt(j);
        i++;
    }
    t = clock() - t;

    printf("%f\n", double(t)/ CLOCKS_PER_SEC);

    return 0;
}
