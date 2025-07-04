#include <iostream>
using namespace std;

int main() {
    char n = 'D';  // Last starting character (4 lines: A to D)
    for (char i = 'A'; i <= n; i++) {
        for (char j = i; j >= 'A'; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
