#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m;
    cout << "enter rows of 1st matrix: ";
    cin >> m;
    int n;
    cout << "enter cols of 1st matrix: ";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // wave print
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j]<<" ";
            }
        }
        //   else if i = 1, 2, 3......
        else
        {
            // print in reverse order
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] <<" ";
            }
        }
    }
    return 0;
}