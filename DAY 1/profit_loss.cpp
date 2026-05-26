#include <iostream>
using namespace std;
int main(){
    // determine profit or loss
    // int cost;
    // cout<<"enter cost price of item : ";
    // cin>>cost;
    // int sell;
    // cout<<"enter selling price of item : ";
    // cin>>sell;
    // if(cost > sell){
    //     cout<<cost - sell<<"rs loss is made";
    // }
    // else if (cost < sell)
    // {
    //    cout<<sell - cost<<"rs profit is made";
    // }
    // else{
    //     cout<<"neither profit nor loss has been made";
    // }

    //  question -> take positive input and tell if it is a three digit number or not
int n;
cout<<"enter the numberr : ";
cin>>n;
if(n > 99 && n < 1000){
    cout<<"the given number is a three digit number";
}
else{
    cout<<"the number is not a three digit number";
}
    return 0;
}