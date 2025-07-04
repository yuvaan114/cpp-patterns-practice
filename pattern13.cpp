#include <iostream>
using namespace std;

int main() {
    char n = 'D';  
    for (char i = 'A'; i <= n; i++) {
        for (char j = i; j >= 'A'; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
