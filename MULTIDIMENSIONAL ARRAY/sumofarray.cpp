#include <iostream>
#include <vector>
using namespace std;
int main(){

    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n;
    cout<<"enter number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the elements of array : ";
    for(int i = 0; i <= m-1; i++){
        for(int j = 0; j <=n-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The elements in 2D array are : "<<endl;;
        for(int i = 0; i <= m-1; i++){
        for(int j = 0; j <=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   int sum = 0;
   for(int i = 0; i <= m-1; i++){
    for(int j = 0; j <= n-1; j++){
        sum = sum + arr[i][j];
    }
   }
   cout<<"the sum of all the elements of array is : "<<sum;
    return 0;
}