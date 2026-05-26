#include <iostream>
using namespace std;
int main(){
    // find the element x in the array. take array and x as input
//     int n;
//     cout<<"Enter sixe of array : ";
//     cin>>n;
//     int arr[n];
//     //  input of array elements
//     for(int i = 0; i<= n-1; i++){
//         cin>>arr[i];
//     }
//     // creating the element x
//     int x;
//     cout<<"enter the element you want to search : ";
//     cin>>x;
//     // checking whether the element is present or not
//    for(int i=0; i<=n-1; i++){
//     if(arr[i] == x){
//         cout<<"element is present in the array"<<endl;
//     }
//     else{
//         cout<<"not present"<<endl;
//     }
//    }

//    prr ye wala method krne s we get some issue ki vo sbb elements ki information de rha hai toh doosra method use krenge

int n;
    cout<<"Enter sixe of array : ";
    cin>>n;
    int arr[n];
    //  input of array elements
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }
    // creating the element x
    int x;
    cout<<"enter the element you want to search : ";
    cin>>x;
    // checking whether the element is present or not
    bool flag = false; // false means not present
   for(int i=0; i<=n-1; i++){
    if(arr[i] == x) flag = true;
   }
   if(flag == true ){
    cout<<"element is present in the array";
   }
   else{
    cout<<"element is not present in the array";
   }
   return 0;
}