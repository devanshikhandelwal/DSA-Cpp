#include <iostream>
using namespace std;
int main (){
    // to count digits
    int n;
cout<<"enter a number : ";
cin>>n;
int count = 0;
while(n > 0){
    n = n/10;
    count++;
}
cout<<count;
    return 0;
}
