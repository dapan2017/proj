#include <iostream>
using namespace std;

const int MAX = 5;

class stack
{
    float num[MAX];
    int top;
    public :
        void init(void)
        {
            top=0;
        }
        void push(float x)
        {
            if (top==MAX)
            {
                cout << "stack is full! " << endl;
                return;
            };
            num[top]=x;
            top++;
        }
        float pop(void)
        {
            top--;
            if (top<0)
            {
                cout << "stack is under flow!"<< endl;
                return 0;
            }
            return num[top];
        }
        void display()
        {
            cout << num << endl;
            cout << &num[0] << endl;
        }

};

int main()
{
    int i;
    float x;
    stack a,b;
    a.init();
    b.init();
    for (i =1 ; i<=MAX ;i++)
        a.push(i);
    a.display();
    for (i=1;i<=MAX;i++)
        cout << a.pop() <<endl;

    cout << "请输入五个数字：" << endl;
    for (i=1;i<=MAX;i++)
    {
        cin >> x;
        b.push(x);
    }
    b.display();
}