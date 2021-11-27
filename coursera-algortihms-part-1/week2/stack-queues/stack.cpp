#include <cassert>

struct node
{
    int data;
    node* next;
};

class stack_ll
{
    public:
        stack_ll()
        {
            first = nullptr;
        }

        ~stack_ll()
        {
            node* oldfirst;

            while(first)
            {
                pop();
            }
        }

        void push(int item)
        {
            first = new node{item, first};
        }

        int pop()
        {
            node* oldfirst;
            int oldfirstitem;

            if(!first) throw "empty stack";

            oldfirst = first;
            first = first->next;

            oldfirstitem = oldfirst->data;
            delete oldfirst;
            return oldfirstitem;
        }

        bool isEmpty()
        {
            return first == nullptr;
        }

    private:
        node* first;
};

class stack_ra
{
    public:
        stack_ra()
        {
            c = 1;
            n = 0;
            array = new int[c];
        }
        ~stack_ra()
        {
            delete [] array;
        }
        bool isEmpty()
        {
            return n == 0;
        }
        void push(int item)
        {
            if(n == c) resize(2*c);
            array[n++] = item;
        }
        int pop()
        {
            int olditem;

            if(n == 0) throw "pop from empty stack";

            olditem = array[--n];
            if(n == c/4) resize(c/2);
            return olditem;
        }

    private:
        void resize(int capacity)
        {
           int i, *newarray;

           newarray = new int[capacity];
           for(i = 0; i < n; i++)
               newarray[i] = array[i];

           delete [] array;
           array = newarray;
           c = capacity;
        }

    private:
        int c, n, *array;
};
int main(void)
{
    int i;
    stack_ll sll;
    stack_ra sra;

    for(i = 0; i < 100; i++)
    {
        sll.push(i);
        sra.push(i);
    }

    for(i = 99; i >= 0; i--)
    {
        assert(sll.pop() == i);
        assert(sra.pop() == i);
    }

    return 0;
}

