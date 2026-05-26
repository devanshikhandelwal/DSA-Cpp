#include <iostream>
using namespace std;
int main(){
    float P;
    cout<<"Enter Principle : "<<endl;
    cin>>P;
    float R;
    cout<<"Enter annual rate : "<<endl;
    cin>>R;
    float T;
    cout<<"enter Time : "<<endl;
    cin>>T;
    float SI = (P * R * T)/100;
    cout<<"the simple interest is : "<<SI;
    return 0;
}