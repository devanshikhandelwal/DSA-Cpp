#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 1. arr.size();
    // vector<int> arr;
    // arr.push_back(6);
    // cout<<arr.size()<<endl;
    // arr.push_back(5);
    // cout<<arr.size()<<endl;
    // arr.push_back(3);
    // cout<<arr.size()<<endl;
    // arr.push_back(7);
    // cout<<arr.size()<<endl;
    // arr.push_back(4);
    // cout<<arr.size()<<endl;

    //  2. arr.capacit();
    // vector<int> arr;
    // arr.push_back(6);
    // cout<<arr.capacity()<<endl;
    // arr.push_back(5);
    // cout<<arr.capacity()<<endl;
    // arr.push_back(3);
    // cout<<arr.capacity()<<endl;
    // arr.push_back(7);
    // cout<<arr.capacity()<<endl;
    // arr.push_back(4);
    // cout<<arr.capacity()<<endl;

    // 3. arr.pop_back
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    for (int i = 0; i <= arr.size(); i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    arr.pop_back();
    arr.pop_back();
    for (int i = 0; i <= arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}