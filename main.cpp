#include <iostream>
#include <set>

using namespace std;

int main() {
    int b = 0;
    int n = 0;
    int m = 0;
    int value = 0;
    int sum1 = 0;
    int sum2 = 0;
    int previous1 = 0;
    int previous2 = 0;
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

    if (keyboards.empty() == true || drives.empty() == true) {
        cout << "-1" << endl;
        return 0;
    }

    // cout << "Keyboard prices: ";
    // for (set<int>::iterator it = keyboards.begin(); it != keyboards.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << endl;

    // cout << "USB prices: ";
    // for (set<int>::iterator it = drives.begin(); it != drives.end(); ++it) {
    //     cout << *it << ' ';
    // }
    // cout << "\n\n";

    // Get sum with max keyboard and min drives
    // cout << "Max keyboard and min drives" << endl;
    set<int>::iterator kit = --keyboards.end();
    max = *kit;
    // cout << "Max: " << max << endl;
    set<int>::iterator dit = drives.begin();
    min = *dit;
    // cout << "Min: " << min << endl;
    sum1 = max + min;
    // cout << "Sum1: " << sum1 << endl;
    while (sum1 <= b && dit != drives.end()) {
        previous1 = sum1;
        // cout << "Previous1: " << previous1 << endl;
        ++dit;
        sum1 = max + *dit;
        // cout << "Sum1: " << sum1 << endl;
    }
    // cout << "\n\n";
    
    // Get sum with min keyboard and max drives
    // cout << "Max keyboard and min drives" << endl;
    dit = --drives.end();
    max = *dit;
    // cout << "Max: " << max << endl;
    kit = keyboards.begin();
    min = *kit;
    // cout << "Min: " << min << endl;
    sum2 = max + min;
    // cout << "Sum2: " << sum2 << endl;
    while (sum2 <= b && kit != keyboards.end()) {
        previous2 = sum2;
        // cout << "Previous2: " << previous2 << endl;
        ++kit;
        sum2 = max + *kit;
        // cout << "Sum2: " << sum2 << endl;
    }

    if (previous1 < previous2) {
        // cout << "Max sum: " << previous2 << endl;
        cout << previous2 << endl;
        return 0;
    }
    cout << previous1 << endl;

    return 0;
}