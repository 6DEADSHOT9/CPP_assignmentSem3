#include <iostream>
using namespace std;

class Person
{

    public:
    char name[64], address[64];
    int age[64], salary[64];

    inline int input(int i = 0)
    {
        cout<<"Number of employees: ";
        int x = 0;
        cin>>x;
        for (i = 0; i < x ; i++)
        {
            // cout << "Enter name: ";
            // cin >> name[i];
            // cout << "Enter age: ";
            // cin >> age[i];
            // cout << "Enter address: ";
            // cin >> address[i];
            cout << "Enter salary: ";
            cin >> salary[i];
        }
        return 0;
        
    };

    int salary_distribution(int x)
    {
        int base, hra, ca , ma, da, gross, net;
        base = (float)salary[x]/2;
        hra = (float)base*0.45;
        ca = 1600.0;
        da = (float)base*0.35;
        ma = 4000.0;
        gross = (float)base+hra+ca+da+ma;
        net = (float)gross-((float)base*0.12);
        int ret[] = {base, hra, ca, da, ma, gross, net};
        for (int i = 0; i <= 6; i++)
        {
            return ret[i];
        }

    };
};

int main()
{
    int x = 0, y = 0, salary_arr[7];
    Person p;
    p.input(x);
    cout<<"Enter employee address: ";
    cin>>y;
    y = p.salary[y];
    for (int i = 0; i <= 6; i++)
    {
        salary_arr[i] = p.salary_distribution(y);
        cout<<salary_arr[i]<<endl;
    }
    // cout<<salary_arr;
    return 0;
}