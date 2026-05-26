#include <iostream>
#include <vector>
using namespace std;
int main(){
       vector<int> v;
       v.push_back(1);
       v.push_back(3);
       v.push_back(2);
       v.push_back(4);
       v.push_back(3);
       v.push_back(4);
       v.push_back(1);
       v.push_back(6);
       v.push_back(0);
       v.push_back(2);
       for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       int x;
       cout<<"give element x : ";
       cin>>x;
       int idx = -1;
       for(int i = 0; i <v.size(); i++){
        if(x == v[i]){
            idx = i;
        }
       }
       cout<<idx<<" "<<endl;
    return 0;
}