#include <iostream>
using namespace std;

class Shape
{

public:
    float r;
    float l;
    float w;

    Shape()
    {
        cout << "Radius     :  ";
        cin >> r;
        cout << "Length     :  ";
        cin >> l;
        cout << "Breadth    :  ";
        cin >> w;
    }

    ~Shape()
    {
        float x;
        float y;
        cout << "Circle     :  " << perimeter(x) << endl;
        cout << "Rectangle  :  " << perimeter(x, y) << endl;
    }
    float perimeter(float x)
    {
        x = this->r * 2 * 22 / 7;
        return x;
    }
    float perimeter(float x, float y)
    {
        x = (this->l + this->w) * 2;
        y = x;
        return y;
    }
};

int main()
{
    Shape s1;
    cout<<"-------PERIMETER-------"<<endl;
}
