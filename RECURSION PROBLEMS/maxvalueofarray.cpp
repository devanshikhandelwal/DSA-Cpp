#include <iostream>
using namespace std;
void display(int arr[], int n, int idx, int max){
    
    if(idx == n){
        cout<<max;
        return;
    }
    if(max < arr[idx]){
        max = arr[idx];
    }
    display(arr, n, idx + 1, max);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    display(arr, n, 0, arr[0]);
    return 0;
}