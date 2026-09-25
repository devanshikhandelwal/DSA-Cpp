// Majority Element [LEETCODE - 169]
#include <iostream>
#include <algorithm>
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
    // agar array unsorted hai toh phle usko inbuilt sort function lagakr sort krlo and then mid find kro kyuki apparently question ki condition hai ki n/2 ya usse jyada time hi aayega humara majority element
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi)/2;
    cout<<"the required sorted array is : "<<arr[mid];
    return 0;
}