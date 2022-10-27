#include <iostream>
using namespace std;

class B{
    public:
        int x;
        void getdata(int a){
            x = a;
        }
        friend class C;
        void display(){
            cout << "x = " << x << endl;
        }
};
class A{
    int y;
    public:
        void getdata(int a){
            y = a;
        }
        friend class C;
        void display(){
            cout << "y = " << y << endl;
        }
};
class C{
    public:
        void swap(A &obA, B &obB){
            int temp = obA.y;
            obA.y = obB.x;
            obB.x = temp;
        }
};
int main(){
    B obB;
    A obA;
    C c;
    obA.getdata(10);
    obB.getdata(20);
    obA.display();
    obB.display();
    c.swap(obA, obB);
    obA.display();
    obB.display();
    return 0;
}


