#include <iostream>
#include <string.h>
using namespace std;

/*Create two objects of class string s1 and s2 as shown below:
String S1= "Amity"
String S2= "University"
Implement the following operations and write the output of each operation:
Copy the content of S1 to S3
Find the substring Univ in S2
Compare S1 and S2
*/

class String{
    
    string strr;
    public:
        void get(){
            cout<<"Enter string :";
            cin>>strr;
        }
        void display(){
            cout<<strr;
        }

    // String operator= (String &strring){

    //     String x;
    //     strcpy(x.strr, strring.strr);
    //     return x;

    // }
};

int main(){
    String s1;
    String s3;
    s3.get();
    s1.get();

    s1 = s3;
    s1.display();

}





