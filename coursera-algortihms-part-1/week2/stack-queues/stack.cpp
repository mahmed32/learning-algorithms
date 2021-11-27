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

int main(void)
{
    int i;
    stack_ll sll;

    for(i = 0; i < 100; i++)
        sll.push(i);

    for(i = 99; i >= 0; i--)
        assert(sll.pop() == i);

    return 0;
}

