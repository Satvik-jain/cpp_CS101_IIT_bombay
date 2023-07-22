// Euclid's method for gcd
#include <iostream>
using namespace std;
int gcd(int x,int y){
        if ((x%y)!=0){
            x=x%y;
            gcd(y,x);}
        else{return y;}
}
int main(){
    cout << "Enter numbers to calculate gcd = ";
    int a,b;
    cin >> a >> b; 
    if (a<b){
        int t;
        a=t; a=b; b=t;
    }
    cout << gcd(a,b);
    return 0;
}