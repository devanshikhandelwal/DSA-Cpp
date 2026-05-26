#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter value of a :";
    cin >> a;
    int b;
    cout << "enter value of b :";
    cin >> b;
    int c;
    cout << "enter value of c :";
    cin >> c;
    if(a >= b && a >= c){
    cout<<"the greatest of all three numbers is : "<<a;
    }
    else if(b>= a && b >= c){
        cout<<"the greatest of all three numbers is : "<<b;
    }
    else if(c >= a && c >= b){
        cout<<"the greatest of all three numbers is : "<<c;
    }
    else{
        cout<<"all three numbers are equal";
    }
    
    return 0;
}