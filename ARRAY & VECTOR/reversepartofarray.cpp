#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversepart(int i, int j, vector<int>& a)
{
    while(i<=j)
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
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    display(arr);
    cout << "the reversed part of the vector is : ";
    reversepart(0, 1, arr);
    display(arr);
    return 0;
}