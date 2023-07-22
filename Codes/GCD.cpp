#include <iostream>
int main(){
    using namespace std;
    int a,b,gcd;
    cin >> a >> b;
    if (a>b)
    {int t; t=b; b=a; a=t;}
    for (int i=1;i<=a;i++){
        if ((a%i==0) && (b%i==0)){
            gcd=i;
        }
    }
    cout <<"gcd is : " << gcd;
}