// #include <iostream>
// using namespace std;
// int product(int a, int b)
// {
//     return a * b;
// }
// int main()
// {
//     int x = product(2, 4);
//     cout << x;
//     //    cout<<product(2,4); ------> can directly do this also
// }

#include<iostream>
using namespace std;
void gun(){
    cout<<"hellow aanya";
    return;
}
void fun(){
    cout<<"how are you aanya"<<endl;
    gun();
    return;
}
int main(){
    fun();
    return 0; 
}