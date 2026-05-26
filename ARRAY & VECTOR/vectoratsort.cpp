#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
    // at operation
     arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    // arr.at(2) = 90;
    // cout<<arr.at(2);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    // sort operation
    sort(arr.begin(),arr.end());
     for(int i = 0; i < arr.size(); i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}