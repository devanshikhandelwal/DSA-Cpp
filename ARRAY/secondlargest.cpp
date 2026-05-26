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
// first find the largest element
int max = arr[0];
for(int i = 1; i <= n-1; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
cout<<"The largest element of the array is : "<<max<<endl;
// now find the second largest element

int Smax = arr[0];
for(int i = 1; i <= n-1; i++){
    if(Smax < arr[i] && arr[i] != max){
        Smax = arr[i];
    }
}
cout<<"The second largest element is : "<<Smax<<endl;

    return 0;
}
// hum isko INT_MIN s bhi solve krr skte hai 