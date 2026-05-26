#include <iostream>
using namespace std;
// inbuilt liberary functions
int sum(int x, int y){
    return(x+y);

}
int main(){
    int x,y;
    cin>>x>>y;
    // if(x<y){
    //     cout<<"the minimum number is: "<<x;
    // }
    // else{
    //     cout<<"the minimum number is : "<<y;
    // }
    // now instead of if else we use function
    cout<<min(x,y);
    return 0;
}