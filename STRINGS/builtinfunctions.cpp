#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Hi My Name Is Aanya Shahara";
    cout<<str<<endl;
    // 1. to find the lenghth or size of string excluding null character. ye dono functions same hi kaam krte hai
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    // for index of the string we can do size - 1 or ---->
    int n = str.size();
    // the index of the string will be n-1 now

    // 2. push_back() ----> to insert an element in a string
    str.push_back('m');
    cout<<str<<endl;
    return 0;
}