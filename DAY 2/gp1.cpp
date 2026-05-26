#include <iostream>
using namespace std;
int main(){
    // 1 2 4 8 16 ..... n terms
    int n;
    cout<<"enter number : ";
    cin>>n;
    int a = 2;
    for(int i = 1; i <= n; i++){
        cout<<a<<endl;
        a = a * 2;
    }
    return 0;
}