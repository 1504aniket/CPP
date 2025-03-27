#include <iostream>
#include <vector>
using namespace std;

void pair_sum(int arr[], int n, int target) {
    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(make_pair(arr[i], arr[j])); // Fix
            }
        }
    }

    for (size_t i = 0; i < ans.size(); i++) {
        cout << "(" << ans[i].first << ", " << ans[i].second << ")" << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    pair_sum(arr, n, target);

    return 0;
}
