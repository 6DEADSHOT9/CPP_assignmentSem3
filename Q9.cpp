#include <iostream>
#include <string>
using namespace std;

class String{
    
    private:
    string strr;
    public:
    friend void copy(String &s1, String &s3);

        void get(){
            cout<<"|      Enter string :";
            cin>>strr;
        }
        void display(){
            cout<<strr<<endl;
        }
        void foindd(string str){
            int pos = strr.find(str);
            if(pos == -1){
                cout<<"|      Substring "<<str<<" not found"<<endl;
            }
            else{
                cout<<"|      Substring "<<str<<" found at position :"<<pos<<endl;
            }
        }
        
        void compare(String &s1, String &s2){
            if(s1.strr == s2.strr){
                cout<<"|      Strings are equal"<<endl;
            }
            else{
                cout<<"|      Strings are not equal"<<endl;
            }
        }
};

void copy(String &A, String &B){
    
    B.strr = A.strr;
    
}

int main(){

    String s1;
    String s2;
    String s3;
    cout<<"----------------------------"<<endl;
    s1.get();
    s2.get();
    copy(s1,s3);
    cout<<"|      After copying s1 to s3 :";
    s3.display();
    s2.foindd("Univ");
    s1.compare(s1, s2);
    cout<<"----------------------------"<<endl;
    return 0;
    
}





