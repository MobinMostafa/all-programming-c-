#include<bits/stdc++.h>
using namespace std;

int main() {
    int MAX_SIZE = 100005;
    char a[MAX_SIZE];

    while (cin.getline(a, MAX_SIZE)) {
       
        sort(a, a + strlen(a));
        for (int i = 0; a[i]; ++i) {
            if (a[i] != ' ') {
                cout << a[i];
            }
        }

        cout << endl;
    }

    return 0;
}
