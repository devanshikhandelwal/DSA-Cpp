#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> a)
{
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    for (int i = 0; i < arr.size(); i++) 
    {
        cout << arr.at(i) << " ";
    }
    cout<<endl;
    change(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    return 0;
}