#include <iostream>
using namespace std;
int main(){
    // pattern 3 - 1
    //             12
    //             123
    //             1234
    //             12345
    for(int row = 1; row <=5; row++){
        for(int col = 1; col <=row; col++){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}