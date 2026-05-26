#include <iostream>
using namespace std;
int main(){
    // calculate the sum of all the elements of array
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    // input
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }
    // sum
    int sum = 0;
    for(int i = 0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}