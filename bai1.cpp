#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    string s1;
    for (int i = s.length() - 1; i >= 0; i--) {
        s1 += s[i];
    }

    cout <<  s1 << endl;

    return 0;
}
