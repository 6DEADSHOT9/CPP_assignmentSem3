#include <iostream>
using namespace std;

/*Consider an example of book shop which sells books and video tapes.
These two classes are inherited from base class called media.
The media class has command data members such as title and publication.
The book class has data members for storing number of pages in a book and tape class has playing time in a tape.
Each class will have member functions such as read () and show (). In the base class, these members have to be defined as virtual functions. 
Write a program to models the class hierarchy for book */

class media{

    char title [64];
    char publication [64];
    
    virtual void read(){
        cout<<"Enter name :";
        cin>>title;
        cout<<endl;
        cout<<"Enter Publication :";
        cin>>publication;

    };
    virtual void show(){
        cout<<title<<endl;
        cout<<publication<<endl;
    };

};

class book: public media{

    int pages;
    void read(){
        cout<<"Enter no. of pages :";
        cin>>pages;
    };
    void show(){
        cout<<pages;
    };

};

class vid_tape: public media{

    int play_time;
    void read(){
        cout<<"Enter play time";
        cin>>play_time;
    };
    void show(){
        cout<<play_time;
    };
};










