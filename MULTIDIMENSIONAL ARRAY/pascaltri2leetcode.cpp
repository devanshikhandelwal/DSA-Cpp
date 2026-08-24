#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<vector<int>> v;

    // Create rows
    for (int i = 1; i <= rowIndex + 1; i++) {
        vector<int> a(i);
        v.push_back(a);
    }

    // Generate Pascal's Triangle
    for (int i = 0; i <= rowIndex; i++) {
        for (int j = 0; j <= i; j++) {

            if (j == 0 || j == i) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }

    return v[rowIndex];
}

int main() {
    int rowIndex;

    cout << "Enter row index: ";
    cin >> rowIndex;

    vector<int> ans = getRow(rowIndex);

    cout << "Pascal Triangle Row: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}