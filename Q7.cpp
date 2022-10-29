#include <iostream>
using namespace std;

/*Design three classes: Student, Exam and Result.
The student class has data members such as roll no, name etc. 
Create a class Exam by inheriting the Student class. 
The Exam class adds data members representing the marks scored in six subjects. 
Derive the Result from class Exam and it has its own members such as total marks.*/


class Student
{
    protected:
        int roll_no;
        char name[20];
    public:
        void getdata()
        {
            cout<<"Enter the name of the student: ";
            cin>>name;
            cout<<"Enter the roll no. of the student: ";
            cin>>roll_no;
        }
        void useData()
        {
            cout<<"-------------------------------"<<endl;
            cout<<"|      Name         :  "<<name<<endl;
            cout<<"|      Roll no.     :  "<<roll_no<<endl;
            cout<<"-------------------------------"<<endl;
        }
};
class Exam: public Student
{
    protected:
        int marks[6];
    public:
        void getdata()
        {
            Student::getdata();
            cout<<"Enter the marks of 6 subjects: "<<endl;
            for(int i=0;i<6;i++){
                cout<<"Subject "<<i+1<<"   :  ";
                cin>>marks[i];
        }
        }
        void useData()
        {
            Student::useData();
            cout<<"------Marks in 6 subjects------"<<endl;
            for(int i=0;i<6;i++){
                cout<<"|      Subject "<<i+1<<"    :  "<<marks[i]<<endl;
        }
            cout<<"-------------------------------"<<endl;
        }
};
class Result: public Exam
{
    protected:
        int total;
    public:
        void getdata()
        {
            Exam::getdata();
            total=0;
            for(int i=0;i<6;i++)
                total+=marks[i];
        }
        void useData()
        {
            Exam::useData();
            cout<<"-------------------------------"<<endl;
            cout<<"|      Total marks  :  "<<total<<endl;
            cout<<"|      Name         :  "<<name<<endl;
            cout<<"-------------------------------"<<endl;

        }
};
int main()
{
    Result r;
    r.getdata();
    r.useData();
    return 0;
}




