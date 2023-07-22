#include <iostream>
int main(){
    using namespace std;
    int n;
    cin >> n;
    int y=n/2 + 1;
    for (int i=0;i<y;i++){
        for (int j=0;j<i+1;j++){
            cout << char(i+65);
            }
        cout << endl;
    }
    for (int i=y-2;i>-1;i--){
        for (int j=i+1;j>0;j--){
            cout << char(65+i);
            }
        cout << endl;
    }


}