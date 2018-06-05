#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main() {
    int b = 0;
    int n = 0;
    int m = 0;
    int value = 0;
    int x = 0;
    int y = 0;
    int sum = 0;
    unordered_set<int> keyboards;
    unordered_set<int> drives;
    set<int> sums;

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

    // cout << "Keyboard prices: ";
    // for (unordered_set<int>::iterator it = keyboards.begin(); it != keyboards.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << endl;

    // cout << "USB prices: ";
    // for (unordered_set<int>::iterator it = drives.begin(); it != drives.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << "\n\n";
    for (unordered_set<int>:: iterator kit = keyboards.begin(); kit != keyboards.end(); ++kit) {
        for (unordered_set<int>:: iterator dit = drives.begin(); dit != drives.end(); ++dit) {            
            sum = *kit + *dit;
            if (sum <= b) {
                sums.insert(sum);
            }
        }
    }
    // for (set<int>::iterator it = sums.begin(); it != sums.end(); ++it) {
    //     cout << *it << ' ';
    // }

    if (!sums.empty()) {
        set<int>::iterator it = --sums.end();
        cout << *it;
        return 0;
    }
    cout << "-1" << endl;

    return 0;
}