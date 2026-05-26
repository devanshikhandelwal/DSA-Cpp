#include <iostream>
using namespace std;
int main()
{
    // question says - Take input a, b, c as and print the following pattern- a=3, b=4, c=5
    // *
    // **
    // ***
    // *
    // **
    // ***
    // ****
    // *
    // **
    // ***
    // ****
    // *****
    int a, b, c;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b; 
    cout << "enter value of c : ";
    cin >> c;

    for (int row = 1; row <= a; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= b; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= c; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}