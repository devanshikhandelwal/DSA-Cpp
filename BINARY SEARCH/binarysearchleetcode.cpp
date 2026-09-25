#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array of size "<<n<<" : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number we need to find in array : ";
    cin>>x;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
            cout<<mid;
            break;
        }
        else if(arr[mid] > x){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }


    return 0;
}