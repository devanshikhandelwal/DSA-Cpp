#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter number n : ";
    cin>>n;
    for(int i = 4; i <= 3*n + 1; i = i + 3){
        cout<<i<<endl;
    }
    return 0;
}