#include <iostream>
using namespace std;
int stairs(int n){
    if(n <= 1){
        return 1;
    }
    return stairs(n-1) + stairs(n-2);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF STAIRS : ";
    cin>>n;
    cout<<"THE NUMBERS OF WAYS TO CLIMB THE STAIRS : "<<stairs(n);
    return 0;
}