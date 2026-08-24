#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x<<endl;
    string s = "123456789123456789";
    long long y = stoll(s);
    cout<<y;
    return 0;
}