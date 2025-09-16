#include <iostream>
#define size 10
using namespace std;

struct stack
{
    int stk[size];
    int top = -1;

    bool isFull()
    {
        return (top == size - 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return;
        }

        stk[++top] = val;
        cout << val << " pushed to Stack" << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << stk[top--] << " popped from Stack" << endl;
        }
    }
};

int main()
{
    stack a;

    a.push(10);
    a.push(20);
    a.push(30);

    a.pop();
    a.pop();
    a.pop();
    a.pop(); // testing Empty Case

    return 0;
}
