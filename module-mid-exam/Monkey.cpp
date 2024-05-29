#include <iostream>
#include <algorithm>
#include <string>
#include <cctype> 

using namespace std;

string sortAndWrite(string line) {
   
    transform(line.begin(), line.end(), line.begin(), ::tolower);

    line.erase(remove(line.begin(), line.end(), ' '), line.end());

    
    sort(line.begin(), line.end());

    return line;
}

int main() {
    string line;

    while (getline(cin, line) && !line.empty()) {
        cout << sortAndWrite(line) << endl;
    }

    return 0;
}

// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <cctype> // For tolower()

// using namespace std;

// // Function to sort characters in-place, handling potential empty lines
// void sortAndWrite(istream& in, ostream& out) {
//     char ch;
//     bool hasValidChars = false;

//     // Read and convert characters (consider EOF and empty lines)
//     while (in.get(ch)) {
//         if (!isspace(ch)) {
//             out.put(tolower(ch));
//             hasValidChars = true;
//         }
//     }

//     // Sort characters only if there were valid ones (avoid unnecessary processing)
//     if (hasValidChars) {
//         istream_iterator<char> begin(in);
//         istream_iterator<char> end_of_stream;

//         // Sort characters in-place using case-insensitive comparison
//         sort(begin, end_of_stream, [](char a, char b) {
//             return tolower(a) < tolower(b);
//         });

//         // Output the sorted characters
//         copy(begin, end_of_stream, ostream_iterator<char>(out));
//     }
// }

// int main() {
//     // Use istream_iterator for efficient reading of characters
//     istream_iterator<char> in(cin), end_of_stream;

//     while (in != end_of_stream) {
//         sortAndWrite(*in, cout);
//         // Advance the iterator to skip the processed line
//         in++;
//     }

//     return 0;
// }
