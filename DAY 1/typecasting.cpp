#include <iostream>
using namespace std;
int main () {
    // int, float, bool, char -> typecasting (to convert one data type into another data type)
    float x = 7.1;
    // int y = x;
    //  cout<<x; //iska output 7.1 aayega 
    // cout<<y; //iskaa output 7 aayega kyuki value of y is integer and 7.1 ka integer part lenge for the value
    // this is the wrong way 
    // correct way is below for type casting ->
int y;
 y = (int)x; //typecasting ka correct method ye hota hai
cout<<y; // output will be 7
    return 0;
}