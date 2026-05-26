#include <iostream>
using namespace std;
int main()
{
    // find the second largest value out of all the elements in the array
int n;
cout<<"ENTER SIZE OF ARRAY : ";
cin>>n;
int arr[n];
for(int i = 0; i<= n-1; i++){
    cin>>arr[i];
}
int x; 
cin>>x;
int count = 0;
for(int i = 1; i <= n-1; i++){
    if(arr[i] > x){
        count++;
    }
}
cout<<count;
    return 0;
}