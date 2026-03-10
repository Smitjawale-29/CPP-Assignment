#include<iostream>
using namespace std;

class student{
    int rollno;
    string name;
    float marks;

    public:
    student(){
        rollno =0;
        name = "not assigned";
        marks = 0.0;
    }

    /*student(int r,string n,float m){
        rollno=r;
        name=n;
        marks=m;
    }*/

    student(int rollno,string name,float marks){
        this->rollno=rollno;
        this->name=name;
        this->marks=marks;
    }

    void studentdetails(){
        cout<<"rollno: "<<rollno<<endl;
        cout<<"Name of the student: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;

    }

};
int main(){
    student s;

    student s1(20,"name smit",100);
    cout<<"Detail of student"<<endl;
    s1.studentdetails();

    student s2(20,"name smit",100);
    cout<<"Detail of student"<<endl;
    s2.studentdetails();
    return 0;
}
/*
1️) When does the compiler generate a default constructor?
The compiler automatically generates a default constructor 
when no constructor is defined in the class. It creates it to initialize the object with default values.

2️) When does it NOT generate one?
The compiler does not generate a default constructor if you have already defined any constructor 
(like a parameterized constructor). In that case, you must create the default constructor yourself if needed.

3️) Can constructors be overloaded?
Yes, constructors can be overloaded by defining multiple constructors with different parameter lists. 
Each constructor must have a different number or type of parameters.*/