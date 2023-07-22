#include <iostream>
#include <cmath>
using namespace std;

double f (double x, double a, int n){
    return pow((pow(x,n)-a),2);
}

double secant_root (double x0, double x01, int n, double a, double epsilon){
    double prev;
    while(abs(x0-x01)>epsilon){
        prev = x01;
        x01=x01-( f(x01,a,n)*(x01-x0))/(f(x01,a,n)-f(x0,a,n));
        x0=prev;
        }
        return x01;
}

int main(){
    int n;
    double x0,x01,a,epsilon=0.0001;
    cin >>  n >> a >> x0 >> x01;
    cout << fixed;
    cout.precision(4);
    cout << secant_root (x0,x01,n,a,epsilon);
}