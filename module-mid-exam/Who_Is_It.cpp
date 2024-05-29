#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int totalMarks;

    
    bool operator<(const Student& other) const {
        if (totalMarks != other.totalMarks) {
            return totalMarks > other.totalMarks; 
        } else {
            return id < other.id; 
        }
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }   
        sort(students, students + 3);

        cout << students[0].id << " " << students[0].name << " " << students[0].section << " " << students[0].totalMarks << endl;
    }

    return 0;
}
