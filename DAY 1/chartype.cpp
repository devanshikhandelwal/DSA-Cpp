#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    if(ch >='A' && ch <= 'Z'){
        cout<<"uppercase";
    }
     else if(ch >='a' && ch <= 'z'){
        cout<<"lowercase";
    }
     else if(ch >= '0' && ch <= '9'){
        cout<<"digit";
    }

    return 0;

}
