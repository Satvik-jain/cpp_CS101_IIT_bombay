#include <iostream>
int main(){
    using namespace std;
    int n,p=0;
    cin >> n;
    for (int i=1;i<n;i++){
        if (((i*(i+1))/2.0)==n){
            cout << 1;
            p=1;
            break;
        }
    }
    if (!p){
        cout << 0;
    }
}