#include<iostream>
using namespace std;

class box{
    private:
    int length;
    int width;
    int height;
    public:

    box(){
        length=0;
        width=0;
        height=0;

    }
    box(int length,int width,int height){
        this->length=length;
        this->width=width;
        this->height=height;
    }

    void setdimension(int len, int wid, int hei){
        this->length=len;
        this->width=wid;
        this->height=hei;
    }

    int volume(){
        
        return length*width*height;
    }
};

int main(){
    box b;

    box b1(10,20,30);
    cout<<"Volume "<<b1.volume()<<endl;


    return 0;
}

/*
Q1.2 — Answer this:
 Why must initialization happen before assignment?
-> Giving a value to a variable when it is created.
 When is initialization preferred over assignment? 
->Giving a value to a variable after it is already created.

int x;      // initialization
x = 10;     // Assignment



*/