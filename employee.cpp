#include<iostream>
using namespace std;

class employee{
    const int empid;
    string name;
    float salary;

    public:
    employee( int id, string n,float s ) : empid(id),name(n),salary(s){

    }

    void employeedetails(){
        cout<<"empid: "<<empid<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};

int main(){
    employee s(123,"smit",800000);
    s.employeedetails();

    return 0;
}

/*
1️) Why must const members be initialized in initializer list?
Const members must be initialized in the initializer list because their value cannot 
be changed after they are created. The initializer list sets their value at the time of object creation.

2️) What happens if you try to assign the value of a const member inside constructor body?
If you try to assign a value to a const member inside the constructor body, the compiler will give an error. 
This is because const variables cannot be reassigned after initialization.

3️) Why is initializer list faster than assignment?
Initializer lists directly initialize data members when the object is created, 
while assignment first creates them and then reassigns values. This avoids extra work and makes initializer lists more efficient.*/