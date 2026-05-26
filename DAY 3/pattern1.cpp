#include <iostream>
using namespace std;
int main(){
    // pattern 1 is -    *****
    //                   *****
    //                   *****
    //                   *****
    //                   ***** 
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <=5; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}