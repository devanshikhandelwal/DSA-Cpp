// USING LOOP  

// #include <iostream>
// using namespace std;
// void print(int n){
//     while(n > 0){
//         cout<<n<<endl;
//         n --;
//     }
// }
// int main(){
//    print(6);
// }

// USING RECURSION

#include <iostream>
using namespace std;
void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    print(n-1);    
}
int main(){
 int n;
 cout<<"ENTER THE VALUE OF n : ";
 cin>>n;
 print(n);
}