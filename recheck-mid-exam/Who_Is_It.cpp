#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int ID;
    string name;
    char section;
    int totalMarks;

    
    Student(int id, string n, char sec, int marks) {
        ID = id;
        name = n;
        section = sec;
        totalMarks = marks;
    }
};

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int id1, id2, id3;
        string name1, name2, name3;
        char sec1, sec2, sec3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> sec1 >> marks1;
        cin >> id2 >> name2 >> sec2 >> marks2;
        cin >> id3 >> name3 >> sec3 >> marks3;

      
        Student A(id1, name1, sec1, marks1);
        Student B(id2, name2, sec2, marks2);
        Student C(id3, name3, sec3, marks3);

        
        if (A.totalMarks >= B.totalMarks && A.totalMarks >= C.totalMarks) {
            cout << A.ID << " " << A.name << " " << A.section << " " << A.totalMarks << endl;
        } else if (B.totalMarks >= C.totalMarks) {
            cout << B.ID << " " << B.name << " " << B.section << " " << B.totalMarks << endl;
        } else {
            cout << C.ID << " " << C.name << " " << C.section << " " << C.totalMarks << endl;
        }
    }

    return 0;
}
