#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    cout << "Enter a sentence: ";
    getline(cin, st);
    cout << st << endl;
    int len = st.length();
    for (int i = 0; i < len; i++)
    {
        if (typeid(i) == typeid(char(i))) {
            st.erase(i);
        }
    }
    cout << st << endl;
    return 0;
}
