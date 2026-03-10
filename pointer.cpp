#include<iostream>
using namespace std;

int main(){
    int x =10;
    int y = 100;

    int *ptr = &x;
    cout<<*ptr<<endl; //10

    int &ref = x;
    cout<<&ref<<endl;
    
    
    //int *ptr = &y;
   //cout<<*ptr<<endl;//error: redeclaration of 'int* ptr'

    *ptr = 20;
    cout<<*ptr<<endl; // changes the value
    cout<<x<<endl; // x value also changes

    ref = 30;
    cout<<&ref<<endl;//address is same as above
    cout<<x<<endl; // x value changes
    return 0;
}
/*
1️)Two differences between pointer and reference:
A pointer stores the address of a variable and must be dereferenced to access the value, 
while a reference is an alias (another name) for an existing variable and is used directly 
like a normal variable. Also, a pointer can be changed to point to another variable, 
but a reference cannot be changed once it is initialized.

2️) Why references cannot be reseated but pointers can:
A reference is permanently bound to the variable it is initialized with, 
so it cannot refer to another variable later. A pointer, however, 
simply stores an address, so its stored address can be changed anytime.

3️) Why references cannot be NULL:
A reference must always refer to a valid existing variable at the time of initialization, 
so it cannot be null. A pointer can store a null value because it is allowed to hold no valid address.
*/