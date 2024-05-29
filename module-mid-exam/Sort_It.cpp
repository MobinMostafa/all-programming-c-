#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
        for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int B[N];
    copy(A, A + N, B);

   
    sort(A, A + N);

   
    sort(B, B + N, greater<int>());


    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
