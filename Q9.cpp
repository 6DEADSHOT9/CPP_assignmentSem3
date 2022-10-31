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
    
    char strr[64];
    String(){
        cout<<"Enter strring :";
        cin>>strr;
    }

    String operator= (String &strring){

        String x;
        strcpy(x.strr, strring.strr);
        return x;

    }
};











