#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n % n == 0 && n % 1 == 0){
        cout<<"given number is prinme number";
    }
    else{
        cout<<"given number is composite number";
    }
    return 0;
}