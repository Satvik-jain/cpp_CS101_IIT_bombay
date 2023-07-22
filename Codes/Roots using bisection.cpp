#include <iostream>
#include <cmath>
double quad(double t){
    return pow(t,3)-5;
}
int main()
{
    using namespace std;
    double xl=1,xr=2;
    for (;xr-xl>0.001;){
        double x=(xl+xr)/2;
        if (quad(x)*quad(xl)<0){
            xr=x;
        }
        else if(quad(x)*quad(xr)<0){
            xl=x;
        }}
    cout << "Root is : " << xl;
}
