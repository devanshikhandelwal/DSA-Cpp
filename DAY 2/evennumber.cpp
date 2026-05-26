#include <iostream>
using namespace std;
int main (){
    // print all even numbers from 1 to 100
    // for(int i = 1; i <= 100; i+1){
    //     cout<<i<<endl;
    // }
    // another method to solve it using if-else is ->
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}