#include <iostream>
using namespace std;
int main(){
    char alph = 'A';
    int n=4;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << alph;
           
        }
        cout<<endl;
        alph++;
    }
    return 0;
}