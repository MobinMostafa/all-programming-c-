#include<bits/stdc++.h>
using namespace std;

class Person
{
  public: 
    string name;
    int age;
    Person(string nm, int ag) 
    {
      name = nm;
      age = ag;
    }
    void print() {
     cout << name << " " << age << endl;
    }
};

int main()
{
 Person rakib("rakib ahsan",24);
//  cout << rakib.name << " " << rakib.age << endl;
//** we can print with function in class below this example
   rakib.print();
   return 0;
}