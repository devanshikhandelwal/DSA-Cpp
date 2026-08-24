#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter columns of matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // spiral
    int min_row = 0;
    int min_col = 0;
    int max_row = m-1;
    int max_col = n-1;
    while(min_row<=max_row && min_col<=max_col){
// right
    for(int j = min_col; j <= max_col; j++){
        cout<<arr[min_row][j]<<" ";
    }
    min_row++;
// Down
if(min_row>max_row || min_col>max_col) break;
    for(int i = min_row; i <= max_row; i++){
        cout<<arr[i][max_col]<<" ";
    }
    max_col--;
// Left
if(min_row>max_row || min_col>max_col) break;
    for(int j = max_col; j >= min_col; j--){
        cout<<arr[max_row][j]<<" ";
    }
    max_row--;
// Up
if(min_row>max_row || min_col>max_col) break;
    for(int i = max_row; i >= min_row; i--){
        cout<<arr[i][min_col]<<" ";
    }
    min_col++;        
    }
    
    return 0;
}
