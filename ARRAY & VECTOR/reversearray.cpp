#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

 vector<int> arr2(n);
 for(int i = 0; i < n; i++){
    int j = n - 1 - i;
    arr2[i] = arr[j];
 }
 for(int i = 0; i < n; i++){
    cout<<arr2[i]<<" ";
 }
    return 0;
}