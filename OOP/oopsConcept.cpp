#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll;

    void printDetails(){
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << roll << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Anuj";
    s1.roll = 07;
    s1.printDetails();
    return 0;
}