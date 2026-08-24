#include <iostream>
using namespace std;
void greet(int n){
    if(n==0){
        return;
    }
    cout<<"GOOD MORNING EVERYONE"<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"Enter number of times greeting to be printed : ";
    cin>>n;
    greet(n);
    return 0;
}