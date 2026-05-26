#include <iostream>
using namespace std;
int main(){
    // ques -> given an array of marks of students, if the array mark of any student is less than 35 print its roll number (roll number is the index of array)
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    int marks[n];
    cout<<" enter marks of students : ";
    // user s marks ka input lete hai
    for(int i = 0; i<=n-1; i++){
        cin>>marks[i];
    }
    //  output aayega sirf unka jiske marks is less than 35
    cout<<"roll number of students whose marks are below 35 are  : ";
    for(int i = 0; i<=n-1; i++){
        if(marks[i] < 35){
            cout<<i<<" ";
        }
    }

    return 0;
}