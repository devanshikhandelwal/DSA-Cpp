#include <iostream>
using namespace std;
int main(){
    
    // 1. take positive integer input and tell if it is even or odd
    // int x;
    // cout<<"enter the integer x:"<<endl;
    // cin>>x;
    // if (x % 2 == 0)
    // {
    //     cout<<"given input is even";
    // }
    // else{
    //     cout<<"given output is odd";
    // }

    // 2. absolute value 
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    if(n < 0){
        cout<<"absolute value of n is : "<<-n;

    }
    else{
        cout<<"absolute value of n is : "<<n;
    }
    return 0;
}