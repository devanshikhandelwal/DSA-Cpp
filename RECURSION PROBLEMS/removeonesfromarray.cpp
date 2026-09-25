#include <iostream>
using namespace std;

void removechar(int arr[], int idx)
{
    if (idx == 8)
    {
        return;
    }

    if (arr[idx] == 1)
    {
        removechar(arr, idx + 1);
    }
    else
    {
        cout << arr[idx] << " ";
        removechar(arr, idx + 1);
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 1, 1, 4, 67, 89};

    removechar(arr, 0);

    return 0;
}