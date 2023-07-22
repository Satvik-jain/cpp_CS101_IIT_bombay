#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //integrate 1/t from 1 to e
    float b=exp(1),a=1; 
    float dt=((b-a)/1000);
    float sum=0;
    float c=a+dt;
    for (int i=1;i<=1000;i++){
        sum=sum+(dt*(2/(a+c)));
        a=c;
        c=c+dt;
}
    cout <<  "solution : " << sum;
}