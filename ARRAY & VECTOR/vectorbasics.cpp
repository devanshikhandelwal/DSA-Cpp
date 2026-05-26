#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr; // syntax of vector
    // you need not mention the size, size ki jgh we use --> push_back operation
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(0);
    // to print this vector array
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // agr hume pura array ek saath print krvana hai toh we use loops as in -->
    for (int i = 0; i <= 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}