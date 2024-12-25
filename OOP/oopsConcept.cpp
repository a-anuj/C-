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

    Student(string name,int roll):name(name),roll(roll){}
};

int main(){
    Student *s1 = new Student("Anuj",07);
    s1->printDetails();
    return 0;
}