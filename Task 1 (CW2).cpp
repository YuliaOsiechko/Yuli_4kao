#include<iostream>
#include<string>
using namespace std;
int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length();i++) {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
      s.erase(i, 1);i--;
    }
  }
  cout<<s;
}
