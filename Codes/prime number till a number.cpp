#include <iostream>
int main(){
    using namespace std;
    int n;
    cin >> n;
    for (int i=2;i<n;i++){
        int y=0;
        for (int j=2;j<=i;j++){
            if (i%j==0){
                y++;
            }
        }
        if(y==1){
            cout << i;
        }
    }
}