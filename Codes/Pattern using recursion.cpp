#include <iostream>
using namespace std;
void pattern(int x){
    for (int i=1;i<=(6-x);i++){
        cout << "*";
    }
    cout << endl;
    if (x==1){return;}
    else{ pattern(x-1);}}
int main(){
  pattern(5);
}