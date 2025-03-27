#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Get number of elements
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    // XOR with numbers from 1 to n-1
    for (int i = 1; i <= n - 1; i++) {
        ans = ans ^ i;
    }

    cout << "Duplicate number: " << ans << endl;
    return 0;
}
