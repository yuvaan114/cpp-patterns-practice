#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int k = 1;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=n; j++){
            cout<<k;
            k++;
        }
        cout<<endl;

    }
    return 0;
}