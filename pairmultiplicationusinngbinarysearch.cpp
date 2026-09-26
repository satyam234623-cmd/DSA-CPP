#include <bits/stdc++.h>
using namespace std;

int main() {

    bool flag = false;

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int x;
    cout << "Enter the value of target: ";
    cin >> x;

    vector<int> v(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {

        // Target is 0
        if (x == 0) {
            if (v[i] == 0 && i + 1 < n) {
                flag = true;
                break;
            }
        }

        // Avoid division by zero
        if (v[i] == 0) {
            continue;
        }

        // Required value must be an exact integer
        if (x % v[i] != 0) {
            continue;
        }

        int req_ans = x / v[i];

        int start = i + 1;
        int end = n - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (v[mid] == req_ans) {
                flag = true;
                break;
            }
            else if (v[mid] < req_ans) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        if (flag) {
            break;
        }
    }

    if (flag) {
        cout << "\nThere exists a required product in the array";
    }
    else {
        cout << "\nThere is no required product in the array";
    }

    return 0;
}
