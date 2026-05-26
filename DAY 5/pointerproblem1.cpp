#include <iostream>
using namespace std;
int main(){
    // wap to calculate sum of two numbers unig pointer
    int x , y;
    int* p = &x;
    int* q = &y;
    cout<<"Enter value of x : ";
    cin>>x;
    cout<<"Enter value of y : ";
    cin>>y;
    cout<<"sum of pointer is : "<<*p + *q;

    return 0;
}