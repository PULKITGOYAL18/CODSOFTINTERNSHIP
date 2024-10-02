#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for pascal triangle ";//6
    cin >> n;

    for (int i = 0; i < n; i++) {
        //for printing  leading spaces
        for (int j = 0; j <= n - i - 2; j++) {
            cout << " ";
        }
         // for printing  Pascal's Triangle values
        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
