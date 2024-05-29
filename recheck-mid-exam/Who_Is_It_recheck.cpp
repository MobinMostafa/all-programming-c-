#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A_id, B_id, C_id;
        char A_name[101], B_name[101], C_name[101];
        char A_section, B_section, C_section;
        int A_totalMarks, B_totalMarks, C_totalMarks;

     
        cin >> A_id >> A_name >> A_section >> A_totalMarks;
  
        cin >> B_id >> B_name >> B_section >> B_totalMarks;
       
        cin >> C_id >> C_name >> C_section >> C_totalMarks;


        if (A_totalMarks > B_totalMarks && A_totalMarks > C_totalMarks) {
            cout << A_id << " " << A_name << " " << A_section << " " << A_totalMarks << endl;
        }

        else if (B_totalMarks > A_totalMarks && B_totalMarks > C_totalMarks) {
            cout << B_id << " " << B_name << " " << B_section << " " << B_totalMarks << endl;
        }

        else if (C_totalMarks > A_totalMarks && C_totalMarks > B_totalMarks) {
            cout << C_id << " " << C_name << " " << C_section << " " << C_totalMarks << endl;
        }

        else {

            if (A_totalMarks == B_totalMarks) {

                cout << (A_id < B_id ? A_id : B_id) << " " << A_name << " " << A_section << " " << A_totalMarks << endl;
            }

            else if (A_totalMarks == C_totalMarks) {

                cout << (A_id < C_id ? A_id : C_id) << " " << A_name << " " << A_section << " " << A_totalMarks << endl;
            }

            else {
      
                cout << (B_id < C_id ? B_id : C_id) << " " << B_name << " " << B_section << " " << B_totalMarks << endl;
            }
        }
    }

    return 0;
}
