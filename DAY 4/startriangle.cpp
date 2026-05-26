#include <iostream>
using namespace std;
void starTriangle(int x){
    for(int row = 1; row <= x; row++){
        for(int col = 1; col <= row; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);
    return 0;
}