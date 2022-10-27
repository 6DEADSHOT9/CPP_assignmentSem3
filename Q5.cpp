#include <iostream>
using namespace std;

class Operation{
    private:
        int ft, in;
    public:
        Operation(int f = 0, int i = 0){
            ft = 0;
            in = 0;
        }
        void getdata(){
            cout << "        Enter feet          :";
            cin >> ft;
            cout << "        Enter inches        :";
            cin >> in;
        }
        Operation operator+ (Operation &object){
            Operation temp;
            temp.ft = ft + object.ft;
            temp.in = in + object.in;
            return temp;
        }
        Operation operator< (Operation &object){
            if(ft < object.ft){
                cout<<"     First is smaller than the second";
                return true;
            }
            if(ft == object.ft && in < object.in) {
            cout<<"First is smaller than the second";
            return true;
         }
            else
            {
                cout<<"     First is greater than the second";
                return false;
            }
        }
        Operation operator== (Operation &object){
            if(ft == object.ft && in == object.in){
                cout<<"        Both are equal       ";
                return true;
            }
            else
            {
                return false;
            }
            
        }
        Operation operator*= (Operation &object){
            int x;
            cout<<"     Enter the number to multiply:";
            cin>>x;
            object.ft *= x;
            object.in *= x;
            return object;
            
        }
        void showdata(){
            if (in >= 12){
                ft += in / 12;
                in = in % 12;
            }
            else if (in < 0){
                ft -= (in / 12) + 1;
                in = 12 + (in % 12);
            }           
            cout << "        Feet                :"<< ft << endl;
            cout << "        Inches              :" << in << endl;
        }
};
int main(){
    Operation L1;
    Operation L2;
    Operation L3;

    int choice;
    bool x = true;
    while (x = true)
    {
        cout<<"---------CHOOSE THE OPERATION----------"<<endl;
        cout<<"|       Addition            [1]       |"<<endl;
        cout<<"|       Comparison          [2]       |"<<endl;
        cout<<"|       Equal               [3]       |"<<endl;
        cout<<"|       Multiplication      [4]       |"<<endl;
        cout<<"|       Exit                [5]       |"<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"        Enter choice        :";
        cin>>choice;
        if (choice < 1 || choice > 5){
            cout<<"------Invalid Choice choose again------"<<endl;
            x = true;
        }
        else{
            x = false;
            break;
        }
    }    
    switch (choice)
    {case 1:
        L1.getdata();
        L2.getdata();
        L3 = L1 + L2;
        L3.showdata();
        break;
    case 2:
        L1.getdata();
        L2.getdata();
        L1 < L2;
        break;
    case 3:
        L1.getdata();
        L2.getdata();
        L1 == L2;
        break;
    case 4:
        L1.getdata();
        L1 *= L1;
        L1.showdata();
        break;
    case 5:
        exit(0);
        break;
    }

    return 0;
}










