#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"so your array is as follows :"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i < n; i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    cout<<"the required sorted array is : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}