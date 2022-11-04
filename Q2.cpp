// Write inline function that obtains the youngest and eldest age of a person from a class person using arrays.
#include <iostream>
using namespace std;
#define SIZE 10
using namespace std;

class Person {
private:
    string name, address;
    int age;
    float salary;
public:
    Person(string name, string address, int age, float salary) {
        this->name = name;
        this->address = address;
        this->age = age;
        this->salary = salary;
    }
    int getAge() {
        return age;
    }
    void print_salary_slip(){
        this->name = name;
        this->address = address;
        this->age = age;
        this->salary = salary;
        cout << "|      Salary slip of " << name << endl;
        cout << "|      Age: " << age << endl;
        cout << "|      Address: " << address << endl;
        cout << "|      Basic Salary: " << salary * 0.5 << endl;
        cout << "|      HRA: " << salary * 0.3 << endl;
        cout << "|      DA: " << salary * 0.2 << endl;
        cout << "|      Total Salary: " << salary << endl;
        cout << "------------------------------------" << endl;
    }
};
    inline int findYoungest(Person p[], int size) {
    int min = p[0].getAge();
    for (int i = 1; i < size; i++) {
        if (p[i].getAge() < min) {
            min = p[i].getAge();
        }  
    }
    return min;
}
    inline int findOldest(Person p[], int size) {
    int max = p[0].getAge();
    for (int i = 1; i < size; i++) {
        if (p[i].getAge() > max) {
            max = p[i].getAge();
        }
    }
    return max;
}
int main() {
    Person p[SIZE] = {
            Person("Maxima Giovanni", "Bridportson", 20, 100000),
            Person("Aelia Ela", "Ringstourbridge", 30, 200000),
            Person("Ligia Ylenia", "Ferspear", 40, 300000),
            Person("Orel Epiphanes", "Coruscant", 50, 98000),
            Person("Vlasi Lenny", "Troisminster", 60, 87000),
            Person("Milagros Aoife", "Foysmith", 70, 66000),
            Person("Nicostrato Zisel", "Druthldenfrecombe", 80, 78000),
            Person("Elisabeth Emrik", "Moose Lonsneaut", 90, 180000),
            Person("Igor Volvo", "Grand Maswilkes", 100, 93000),
            Person("Loren Dove", "Ogeorge", 110, 140000),
    };
    int youngest, eldest, k;
    youngest = findYoungest(p, SIZE);
    eldest = findOldest(p, SIZE);
    cout<<"Eldest: "<<eldest<<endl;
    cout<<"Enter the number of entries to show: ";
    cin>>k;
    cout<<"----------------------------------------"<<endl;
    for(int i = 0; i < k; i++) {
        p[i].print_salary_slip();
    }
    return 0;
}
