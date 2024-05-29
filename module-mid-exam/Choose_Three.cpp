#include <iostream>
#include <algorithm>

using namespace std;

bool findSum(int arr[], int n, int sum) {
    
    sort(arr, arr + n);

  
    for (int i = 0; i < n - 2; i++) {
       
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        int target = sum - arr[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[left] + arr[right];

           
            if (currentSum == target) {
                return true;
            } else if (currentSum < target) {
               
                left++;
            } else {
               
                right--;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    for (int j = 1; j <= T; j++) {
        int N, S;
        cin >> N >> S;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        if (findSum(arr, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
