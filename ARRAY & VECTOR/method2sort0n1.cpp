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
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (a[j] == 1)
        {
            j--;
        }
        if (a[i] == 0)
        {
            i++;
        }
        if(i > j) break;
        if (a[i] == 1 && a[j] == 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
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