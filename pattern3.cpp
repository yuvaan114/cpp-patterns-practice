#include <iostream>
using namespace std;
int main(){
    char alph = 'A';
    int n = 4;
    for(int i = 0; i<n; i++){
        char alph = 'A';
        for(int j = 1; j<=n; j++){
            cout<<alph;
            alph++;
            
        }
        
        cout<<endl;

    }
    
    return 0;
}