#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //    to find sum of two arrays
    int m;
    cout << "Enter number of rows : ";
    cin >> m;
    int n;
    cout << "enter number of columns : ";
    cin >> n;
    int arr[m][n];
    cout << "enter the elements of array 1 : ";
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The elements in array 1 are : " << endl;
    ;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int brr[m][n];
    cout << "enter the elements of array 2 : ";
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> brr[i][j];
        }
    }
    cout << "The elements in array 2 are : " << endl;
    ;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    int res[m][n];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
    cout << "The sum of 2 array is : " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}