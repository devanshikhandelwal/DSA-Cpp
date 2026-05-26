#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr;
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    cout<<"Size is: "<<arr.size()<<endl;
    cout<<"capacity is: "<<arr.capacity()<<endl;
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
     cout<<"Size is: "<<arr.size()<<endl;
    cout<<"capacity is: "<<arr.capacity()<<endl;
    // iska mtlb hai ki pop back krne k  baad size reduce hojayega lekin capacity utni hi rhegi
    return 0;
}