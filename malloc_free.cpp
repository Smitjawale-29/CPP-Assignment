#include<iostream>
#include<cstdlib>   // Required for malloc and free
using namespace std;

int main() {

    
    int *arr = (int*) malloc(5 * sizeof(int));


    if(arr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

   
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "You entered:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    free(arr);

    return 0;
}
/*
1️) Why constructors are not called when using malloc:
malloc only allocates raw memory (bytes) and does not know about C++ classes,
 so it does not call constructors. Constructors are called only when using new in C++.

2️) Why new is preferred in C++:
new is preferred because it allocates memory and automatically calls 
the constructor to properly initialize objects. It is also type-safe and does not require typecasting.

3️)Difference in return types and initialization:
malloc returns a void* pointer and does not initialize the memory, 
while new returns a pointer of the correct type and can initialize the object. 
new also allows direct initialization like new int(10).

4️) Why malloc cannot initialize complex types:
malloc does not understand classes, constructors, or member functions, 
so it cannot properly initialize objects with complex behavior. Complex types require constructors, which only new can call in C++.*/