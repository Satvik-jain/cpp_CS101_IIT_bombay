#include <iostream>
using namespace std;
double sqrt(double n,double x0){
    double x1=(x0+(n/x0))/2;
    if ((x0-x1)<0.00001){return x1;}
    else return sqrt(n,x1); 
}
int main(){
    double S;
    cin >> S;
    double x0=10;
    cout << fixed;
    cout.precision(5);
    cout << sqrt(S,x0);
}