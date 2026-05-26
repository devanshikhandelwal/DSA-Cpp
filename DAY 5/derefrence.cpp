#include <iostream>
using namespace std;
int main(){
    // int x = 4;
    // int* p = &x;
    // cout<<p<<endl; 
    // // address of x store hogya yha p
    // cout<<*p;
    // // x ki value aagyi if *p is used

    // one more thing we can do is ---->
    int x = 123;
    int* p = &x;
    *p = 45;
    cout<<x; 
    // abb jo x print krvaya hai uski value 45 aayegi bcz *p ki value is 45
    return 0;
}