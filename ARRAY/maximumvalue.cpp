#include <iostream>
#include <climits> //this is for INT_MIN 
using namespace std;
int main()
{
    // find the maximum value out of all the elements in the array

    int arr[8] = {1, 45, 63, 87, 65, 87, 34, 67};
    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i <= 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}