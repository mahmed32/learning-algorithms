#define SIZE 100U
int main(void)
{
    unsigned int l, r, m, s, k;

    int data[SIZE] = {};

    l = 0; r = SIZE - 1;
    while(l <= r)
    {
        m = (r - l)/2 + l;

        if(k > data[m]) l = m + 1;
        else if(k < data[m]) r = m - 1;
        else break;
    }
    return 0;
}


