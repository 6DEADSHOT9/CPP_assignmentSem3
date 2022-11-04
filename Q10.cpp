#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T *stk;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        stk = new T[size];
    }
    void push(T x){
        if (top == size - 1)
            cout<<"|      Stack Overflow"<<endl;
        else
        {
            top++;
            stk[top] = x;
        }
    }
    T pop(){
    T x = -1;
    if (top == -1)
        cout<<"|      Stack Underflow"<<endl;
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
    void display(){
    cout<<"|      Current Stack: "<<"[ ";
    for (int i = top; i >= 0; i--)
        cout<<stk[i]<<" ";
    cout <<"]"<<endl;
}
};

int main()
{
    Stack<char> stk(10);
    cout<<"----------------------------------------"<<endl;
    stk.push('M');
    stk.push('M');
    stk.push('I');
    stk.push('R');
    stk.push('K');
    stk.display();
    cout<<"|      Popping top element: "<<stk.pop()<<endl;
    stk.display();
    cout<<"|      Pushing G into stack: "<<endl;
    stk.push('G');
    stk.display();
    cout<<"----------------------------------------"<<endl;
    return 0;

}