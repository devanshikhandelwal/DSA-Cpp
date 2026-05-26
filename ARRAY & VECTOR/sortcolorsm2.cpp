#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void sortcolors(vector<int> &nums)
{
    int n = nums.size();
    int lo = 0;
    int mid = 0;
    int hi = n - 1;
    while (mid <= hi)
    {
        if (nums[mid] == 2)
        {
            int temp = nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
        }
        else if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
    }
}
int main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sortcolors(arr);
    display(arr);
    return 0;
}