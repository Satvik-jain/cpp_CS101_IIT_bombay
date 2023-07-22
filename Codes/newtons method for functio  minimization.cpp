#include <iostream>
#include <cmath>
using namespace std;

double d2f (double x, double a, int n){
    return 2*n*((n-1)*(pow(x,n)-a)*pow(x,(n-2))+n*pow(x,2*n-2));
}
double df(double x, double a, int n){
    return 2*n*(pow(x,n)-a)*pow(x,(n-1));
}
double newtons_method (double x0, int n, double a, double epsilon){
    double x=100;
    while (abs(x-x0)>epsilon){
        x=x0;
        x0=x0-(df(x0,a,n)/d2f(x0,a,n));
    }
    return x0;
}

int main(){
    int n;
    double x0,a,epsilon=0.0001;
    cin >>  n >> a >> x0;
    cout << fixed;
    cout.precision(4);
    cout << newtons_method (x0,n,a,epsilon);
}