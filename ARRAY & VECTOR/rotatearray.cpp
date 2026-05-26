#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "The array is : ";
    display(arr);
    int k;
    cin >> k;
    reversePart(0, n - k - 1, arr);
    reversePart(n - k, n - 1, arr);
    reversePart(0, n - 1, arr);
    display(arr);
    return 0;
}