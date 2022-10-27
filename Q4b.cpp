#include <iostream>
using namespace std;

class DistM{
    public:
    int m, cm;
        void getdata(int a, int b){
            m = a;
            cm = b;
        }
        void display(){
            cout << "Distance in meters and centimeters: " << m << "m " << cm << "cm" << endl;
        }
};
class DistF{
    public:
    int ft, in;
        void getdata(int a, int b){
            ft = a;
            in = b;
        }
        void display(){
            cout << "Distance in feet and inches: " << ft << "ft " << in << "in" << endl;
        }
};
class sum{
    public:
    void add(DistM &obM, DistF &obF){
    int m = obM.m + (obF.ft * 0.3048);
    int cm = obM.cm + (obF.in * 2.54);
    cout << "Sum of distances: " << m << "m " << cm << "cm" << endl;
};
};

int main(){
    DistM obM;
    DistF obF;
    sum sum;
    obM.getdata(10, 20);
    obF.getdata(30, 40);
    obM.display();
    obF.display();
    sum.add(obM, obF);
    return 0;
}


