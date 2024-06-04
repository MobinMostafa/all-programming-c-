// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s); 

//     int p = 0;
//     while (p < s.length()) {
//         while (p < s.length() && s[p] == ' ') {
//             p++; 
//         }
//         int nextSpace = s.find(' ', p);
//         string word = s.substr(p, nextSpace - p);
//         if (word == "Jessica") {
//             cout << "YES" << endl;
//             return 0;
//         }
//         p = nextSpace;
//     }

//     cout << "NO" << endl;
//     return 0;
// }

#include <iostream>

#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    stringstream ss(s);
  
    string name;
    bool found = false;

    while (ss >> name) {
        if (name == "Jessica") {
            found = true;
            break;
        }
    }

    
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}


