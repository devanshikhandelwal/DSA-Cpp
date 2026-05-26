#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    int count = 0;
    for(int i = 1; i <=n ; i++){
        count++;
    }
    cout<<"the count is  : "<<count;
    return 0;
}