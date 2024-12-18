#include <iostream>
#include <vector>
using namespace std;

int N, K, cnt = 0;
bool flag = false;

bool merge(vector<int>& arr, int l, int m, int r) {
    vector<int> tmp(r - l + 1);
    int i = l;
    int j = m + 1;
    int k = 0;

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }

    while (i <= m)
        tmp[k++] = arr[i++];
    while (j <= r) {
        tmp[k++] = arr[j++];
    }

    k = 0;
    while (k < tmp.size()) {
        arr[l + k] = tmp[k];
        k++;
        cnt++;
        if (cnt == K) {
            cout << arr[l + k - 1];
            return true;
        }
    }
    return false;
}

bool mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        if (mergeSort(arr, l, m)) return true;
        if (mergeSort(arr, m + 1, r)) return true;
        return merge(arr, l, m, r);
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    if (!mergeSort(arr, 0, N - 1)) cout << -1;

    return 0;
}