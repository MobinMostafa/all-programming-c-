#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T; 

    for(int i=1; i<=T; T--) {
        string S, X;
        cin >> S >> X; 

    
        int r = S.find(X); 
        while (r != -1) { 
            S.replace(r, X.length(), "#");
            r = S.find(X, r + 1);
        }

        cout << S << endl; 
   }
    return 0;
}
