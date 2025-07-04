#include <iostream>
using namespace std;
int main(){
    int n = 3;
    char alph = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=n; j++){
            cout<<alph;
            alph++;
        }
        cout<<endl;

    }
    return 0;
}