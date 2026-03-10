#include<iostream>
using namespace std;

class swap{
    int a;
    int b;
    int c;

    public:
     swap(){
        a =0;
        b= 0;
        c=0;
     }
     
     swap(int aa,int bb,int cc){
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
    swap s;
    int x = 10;
    int y = 20;
    
    return 0;
}