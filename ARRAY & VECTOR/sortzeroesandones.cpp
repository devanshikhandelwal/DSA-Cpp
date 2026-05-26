#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void sort01(vector<int> &a)
{
    int n = a.size();
    int noo = 0;
    int noz = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            noz++;
        }
        else
        {
            noo++;
        }
    }
    // filling zeroes and ones as this is two pass method or method number 1
    for (int i = 0; i < n; i++)
    {
        if (i <= noz - 1)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
        }
    }
}
int main()
{
    int n;
    cout << "enter size n of array : ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << endl;
    // sort(arr.begin(), arr.end());
    sort01(arr);
    display(arr);
    return 0;
}