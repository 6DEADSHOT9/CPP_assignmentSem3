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
            cout<<"Enter the roll no. and name of the student: ";
            cin>>roll_no>>name;
        }
        void putdata()
        {
            cout<<"Roll no. = "<<roll_no<<endl;
            cout<<"Name = "<<name<<endl;
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
            cout<<"Enter the marks of 6 subjects: ";
            for(int i=0;i<6;i++)
                cin>>marks[i];
        }
        void putdata()
        {
            Student::putdata();
            cout<<"Marks in 6 subjects: ";
            for(int i=0;i<6;i++)
                cout<<marks[i]<<" ";
            cout<<endl;
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
        void putdata()
        {
            Exam::putdata();
            cout<<"Total marks = "<<total<<endl;
        }
};
int main()
{
    Result r;
    r.getdata();
    r.putdata();
    return 0;
}




