#include <iostream>
#include <string>
using namespace std;
int main(){
    string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
    int max = stoi(arr[0]);
    for(int i = 0; i < 6; i++){
        int x = stoi(arr[i]);
        if(x > max){
            max = x;
        }
    }
    cout<<"largest number in the string is : "<<max;
    return 0;
}