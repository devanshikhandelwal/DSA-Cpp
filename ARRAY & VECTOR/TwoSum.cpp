#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enetr size : ";
    cin>>n;
  vector<int> nums;

  for(int i = 0; i < n; i++){
 int x;
 cin>>x;
nums.push_back(x);
  }
  cout<<endl;
  int target;
  cout<<"target = ";
  cin>>target;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(nums[i] + nums[j] == target){
            cout<<"("<<i<<","<<j<<")";
        }
    }
  }
    return 0;
}

