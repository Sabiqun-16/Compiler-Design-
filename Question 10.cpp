#include <bits/stdc++.h>
using namespace std;

int main() {
    char c, next;
    while ((c = cin.get()) != EOF) {

        if (c == '/') {
            next = cin.peek();

            if (next == '/') {                // single-line comment
                cin.get();
                while ((c = cin.get()) != '\n' && c != EOF);
                if (c == '\n') cout << '\n';
            }
            else if (next == '*') {            // multi-line comment
                cin.get();
                char prev = 0;
                while ((c = cin.get()) != EOF) {
                    if (prev == '*' && c == '/') break;
                    prev = c;
                }
            }
            else {
                cout << c;
            }
        }
        else {
            cout << c;
        }
    }
}
