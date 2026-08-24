#include <iostream>
using namespace std;
int power(int a, int b){
if(a == 0 && b == 0){
    cout<<"0 raised to the power 0 is not defined"<<endl;
    return -100;
}
if(b == 0){
    return 1;
}
return a * power(a, b-1);
}
int main()
{
    int a;
    cout << "ENTER THE VALUE OF a : ";
    cin >> a;
    int b;
    cout << "ENTER THE VALUE OF b : ";
    cin >> b;
    cout<<power(a, b);
    
}