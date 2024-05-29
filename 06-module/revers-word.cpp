#include<bits/stdc++.h>

using namespace std;

//*****************  normal print 

// int main()
// {
//   string s;
//   getline(cin,s);
//   stringstream ss;
//   ss << s;
//   string word;
//   while (ss >> word)
//   {
//     cout << word << endl;
//   }
//   return 0;
// }

//************* send string to reference with function 

// void print(string& s)
// {
//    s = "world";
// }

// int main() 
// {
//  string s = "hello";
//  print(s);
//  cout << s << endl;

//  return 0;
// }

//******* reverse word 
void print(stringstream & ss)
{
  string word;
  if (ss >> word)
  {
    print(ss);
    cout << word << endl;
  }
}

int main()
{
 string s;
 getline(cin, s);
 stringstream ss(s);
 print(ss);
 return 0;
}