#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int b = 0;
    int n = 0;
    int m = 0;
    int value = 0;
    string line;
    stringstream ss;
    vector<int> keyboards;
    vector<int> drives;

    cin >> b;
    // cout << b << endl;
    cin >> n;
    // cout << n << endl;
    cin >> m;
    // cout << m << endl;
    
    for (int i = 0; i < n; ++i) {
        cin >> value;
        if (value <= b) {
            keyboards.push_back(value);
        }
    }

    for (int i = 0; i < m; ++i) {
        cin >> value;
        if (value <= b) {
            drives.push_back(value);
        }
    }
    
    // cout << "Keyboard prices: ";
    // for (vector<int>::iterator it = keyboards.begin(); it != keyboards.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << endl;

    // cout << "USB prices: ";
    // for (vector<int>::iterator it = drives.begin(); it != drives.end(); ++it) {
    //     cout << *it << ' ';
    // }

    return 0;
}