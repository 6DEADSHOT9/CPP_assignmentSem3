#include <iostream>
using namespace std;

class shape
{
    public:
        int x, y, z;

    float area(int x)
    {
        return (float)x*x*22/7;
    };
    float area(int x, int y)
    {
        return x*y;
    };
    float area(int x, int y, int z)
    {
        return (float)0.5*x*y;
    };
};

int main()
{
    shape s;
    cout << "Area of circle    : " << s.area(5) << endl;
    cout << "Area of rectangle : " << s.area(5, 6) << endl;
    cout << "Area of triangle  : " << s.area(5, 6, 7) << endl;
    return 0;
}
