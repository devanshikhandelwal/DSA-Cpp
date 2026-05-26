#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value: ";
    cin>>n;
    if (n >= 0)
    {
      cout<<"the absolute value of given number is : "<<n;
    }
    else{
        cout<<"the absolute value of given number is : "<<-n;
    }
    return 0;
}