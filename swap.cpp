#include<iostream>
using namespace std;

class swapper{
    int a;
    int b;
    int c;

    public:
     swapper(){
        a =0;
        b= 0;
        c=0;
     }
     
     swapper(int aa,int bb,int cc){
        this->a=aa;
        this->b=bb;
        this->c=cc;
    }

    void swapbyvalue(int a, int b){
        int temp =a;
        a=b;
        b=temp;
    }

    void swapbyaddress(int *a, int *b){
        int temp =*a;
        *a=*b;
        *b=temp;

    }

    void swapbyreference(int &a, int &b){
        int temp = a;
        a = b;
        b= temp;
    }


};

int main(){
    swapper s;
    int x = 10;
    int y = 20;

    s.swapbyvalue(x,y);
    cout<<x<<endl;
    cout<<y<<endl;

    
    return 0;
}

/*
Q2.2 — Answer this:
Explain how reference variables act as aliases and how that affects swapByReference().

=> Reference variables act as aliases because they do not create a new variable; instead, they provide another
name for an existing variable. Both the original variable and the reference share the same memory location.
This means any change made through the reference directly affects the original variable.
In the swapByReference() function, the parameters are declared using reference symbols (&). When values
are passed to this function, the parameters become aliases of the original variables. As a result, when the
swap operation is performed inside the function, it directly modifies the original variables rather than
working on copies. That is why swapByReference() successfully swaps the values outside the function.
*/