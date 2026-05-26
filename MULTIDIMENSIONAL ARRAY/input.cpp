#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row;
    cout << "enter row size : ";
    cin >> row;
    int col;
    cout << "enter column size : ";
    cin >> col;
    int arr[row][col];
    cout << "enter the elements of the array : " << endl;
    // input
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    //  output
    cout << "the array elements provided by the user are : " << endl;
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}