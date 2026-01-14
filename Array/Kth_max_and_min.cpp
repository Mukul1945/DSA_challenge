// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cin >> k;

//     sort(arr, arr + n);

//     cout << "Kth smallest: " << arr[k - 1] << endl;
//     cout << "Kth largest: " << arr[n - k] << endl;

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++) {
        maxHeap.push(arr[i]);
        minHeap.push(arr[i]);
    }

    for (int i = 1; i < k; i++) {
        maxHeap.pop();
        minHeap.pop();
    }

    cout << "Kth largest: " << maxHeap.top() << endl;
    cout << "Kth smallest: " << minHeap.top() << endl;

    return 0;
}
