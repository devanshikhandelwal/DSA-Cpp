#include <iostream>
#include <vector>
using namespace std;
int main(){
    // to find second largest number in 2D array
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
    int max = arr[0][0];
    for(int i = 0; i <= m-1; i++){
        for(int j = 0; j <= n-1; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout<<"The maximum element in the array is : "<<max;
cout<<endl;
    int Smax = arr[0][0];
    for(int i = 0; i <= m-1; i++){
        for(int j = 0; j <= n-1; j++){
            if(arr[i][j] > Smax && arr[i][j] < max){
                Smax = arr[i][j];
            }
        }
    }
    cout<<"The second maximum element in the array is : "<<Smax;
    return 0;
}