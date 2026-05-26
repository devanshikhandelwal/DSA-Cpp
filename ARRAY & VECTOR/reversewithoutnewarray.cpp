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

for(int i = 0, j = n-1; i <= j; i++, j--){
 int temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
}
for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}