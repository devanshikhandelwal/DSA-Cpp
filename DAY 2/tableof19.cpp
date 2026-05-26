#include <iostream>
using namespace std;
int main(){
    // table of input n
    int n;
    cout<<"enter the number : ";
    cin>>n;
    // for(int i = 1; i <= n*10; i++){
    //     if(i % n == 0){
    //         cout<<i<<endl;
    //     }
    // }

// another way of solving it is -->
for(int i = n; i <= n*10; i = i + n){
    cout<<i<<endl;
}
    return 0;
}