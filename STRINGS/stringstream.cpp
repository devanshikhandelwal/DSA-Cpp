#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}