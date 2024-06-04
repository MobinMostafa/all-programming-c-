#include <iostream>
#include <string>

using namespace std;



int main() {
    int N;
    cin >> N;
    
    int mx = 100;
    string nm[mx];
    int cls[mx];
    char s[mx];
    int id[mx];

    
    for (int i = 0; i < N; ++i) {
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];
    }

    
    for (int i = 0; i < N / 2; ++i) {
        swap(s[i], s[N - 1 - i]);
    }

    
    for (int i = 0; i < N; ++i) {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }

    return 0;
}
