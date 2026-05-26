#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 6, 1, 7};
     int* ptr = arr; //--> no error
    // int* ptr = &arr[0]; --> no error
    // int* ptr = &arr; --> error
    // int* ptr = arr[0]; -->error
    cout << ptr << endl; // 0x61fef8
    ptr[0] = 8; // we can also write -> *ptr = 8;
 cout<<ptr[0]<<endl; // 4 print hojayega no error 
 for(int i = 0; i<=4; i++){
    // cout<<arr[i]; ye wala toh normal way hai toh ye print hoga but different way is :
    // cout<<ptr[i]<<" ";
    // cout<<i[ptr]<<" ";
    // cout<<*ptr<<" ";
    // cout<<i[arr]<<" ";
    // upar diye hue saare ways s hum array ko print krva skte hai
 }
    return 0;
}