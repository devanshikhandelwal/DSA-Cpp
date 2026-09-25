#include <iostream>
using namespace std;
void hanoi(int n, string a, string b, string c){
    if(n==0){
        return;
    }
    hanoi(n-1,a,c,b);
    cout<<a<<" --> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF DISKS : ";
    cin>>n;
    hanoi(n, "Source", "Aux", "Destination");
    return 0;
}