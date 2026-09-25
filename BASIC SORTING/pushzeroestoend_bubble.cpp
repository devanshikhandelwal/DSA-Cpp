// push zeroes to end while maintaining the relative order of other elements
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter te elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"so your array is as follows :"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] == 0 && arr[j+1] != 0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"the required sorted array is : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}