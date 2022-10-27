#include <iostream>
using namespace std;

class this_ptr{
    int x;
    public:
        this_ptr(int x)
        {
            this->x = x;
        }
        void show()
        {
            cout << "x = " << x << endl;
        }
};
int main()
{
    this_ptr a(10);
    a.show();
    return 0;
}
