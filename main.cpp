#include <iostream>
#include <set>

using namespace std;

int main() {
    int b = 0;
    int n = 0;
    int m = 0;
    int value = 0;
    int sum = 0;
    int max = 0;
    int min = 0;
    string line;
    set<int> keyboards;
    set<int> drives;

    cin >> b;
    // cout << b << endl;
    cin >> n;
    // cout << n << endl;
    cin >> m;
    // cout << m << endl;
    
    for (int i = 0; i < n; ++i) {
        cin >> value;
        if (value < b) {
            keyboards.insert(value);
        }
    }

    for (int i = 0; i < m; ++i) {
        cin >> value;
        if (value < b) {
            drives.insert(value);
        }
    }

    if (keyboards.empty() == true && drives.empty() == true) {
        cout << "-1" << endl;
        return 0;
    }

    set<int>::iterator kit = --keyboards.end();
    max = *kit;
    // cout << max << endl;
    // cout << *kit << endl;
    set<int>::iterator uit = drives.begin();
    min = *uit;
    // cout << min << endl;
    // while (sum <= b) {

    // }

    
    
    // cout << "Keyboard prices: ";
    // for (set<int>::iterator it = keyboards.begin(); it != keyboards.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << endl;

    // cout << "USB prices: ";
    // for (set<int>::iterator it = drives.begin(); it != drives.end(); ++it) {
    //     cout << *it << ' ';
    // }

    return 0;
}