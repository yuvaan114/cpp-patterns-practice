#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char alph = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < i; j++) {
            cout<<" ";
        }
        for(int j = 0; j < n - i; j++){
            cout << alph;
            
        }
        alph++;
        cout<<endl;
    }
    return 0;
}