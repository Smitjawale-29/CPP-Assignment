#include<iostream>
using namespace std;
int main(){
    int * arr = new int[5];
    cout<<"Enter the 5 integears : "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}