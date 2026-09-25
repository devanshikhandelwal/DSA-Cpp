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
    for(int i = 0; i < n - 1; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }

        }
        swap(arr[i], arr[mindx]);
    }
    cout<<"the required sorted array is : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}