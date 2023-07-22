#include <iostream>
using namespace std;
int const MAX=100;
struct monomial{
    int coef;
    int pow;
};
void displaypoly(monomial c1[],int n){
    cout << endl;
    for (int i=0;i<n;i++){
        cout << c1[i].coef << "x^" << c1[i].pow;
        if (i!=n-1) cout << " + ";
    }
    cout << endl;
}
void addition_polynomial(monomial c1[],monomial c2[],monomial c3[],int n1,int n2,int &n3){
    int i1=0,i2=0,i3=0;
    while ((i1!=n1)&&(i2!=n2)){
        if(c1[i1].pow==c2[i2].pow){
            c3[i3].pow=c1[i1].pow;
            c3[i3].coef=c1[i1].coef+c2[i2].coef;
            i1++;i2++;i3++;
        }
        else if(c1[i1].pow<c2[i2].pow){
            c3[i3]=c1[i1]; 
            i1++;i3++;
        }
        else if(c1[i1].pow>c2[i2].pow){
            c3[i3]=c2[i2]; 
            i2++;i3++;
        }
    }
    if (n1>n2){
        while(i1!=n1){
            c3[i3]=c1[i1]; 
            i1++;i3++;
        }}
    if (n1<n2){
        while(i2!=n2){
            c3[i3]=c2[i2]; 
            i2++;i3++;
        }}  
    n3=i3;}
int main(){
    int n1,n2,n3;
    cout << "Enter the number of terms in the first and the second polynomial : ";
    cin >> n1 >> n2 ;
    n3=n1+n2;
    monomial c1[n1],c2[n2],c3[n3];
    cout << "Enter first polynomial" << endl;
    for (int i=0;i<n1;i++){
        cout << "Enter the coefficient of term " << i+1 << ": ";
        cin >> c1[i].coef;
        cout << "Enter the power of term " << i+1 << ": ";
        cin >> c1[i].pow;
    }
    displaypoly(c1,n1);
    cout << "Enter second polynomial" << endl;
    for (int i=0;i<n2;i++){
        cout << "Enter the coefficient of term " << i+1 << ": ";
        cin >> c2[i].coef;
        cout << "Enter the power of term " << i+1 << ": ";
        cin >> c2[i].pow;
    }
    displaypoly(c1,n1);
    addition_polynomial(c1,c2,c3,n1,n2,n3);
    displaypoly(c3,n3);
}