#include <iostream>
using namespace std;
int main(){

    //  ques -> take positive integer input and tell if it is divisible by 5 and 3.
     int n;
     cout<<"enter the number n : ";
     cin>>n;
     if(n % 5 == 0 && n % 3 == 0){
         cout<<"the given number is divisible by both 3 and 5";
     }
     else if(n % 5 == 0){
         cout<<"number divisible by only 5";
     }
     else if(n % 3 == 0){
         cout<<"number divisible bby only 3";
     }
     else{
         cout<<"number neither divisible by 3 nor by 5";
     }

   
    return 0;
}