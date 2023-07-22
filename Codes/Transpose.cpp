#include <iostream>
using namespace std;

void Matrix(int **a,int n1,int n2){
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cout << "Enter element (" << i << "," << j << ") : ";
            cin >> a[i][j]; 
}}}

void Show(int **a,int n1,int n2){
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cout << a[i][j];}
            cout << endl;
            }
            cout << endl;
}

void Transpose(int **a,int **at,int n1,int n2){
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            at[j][i]=a[i][j];
        }
}}


int main(){
    int n1,n2;
    cout << "Enter number of rows : ";
    cin >> n1;
    cout << "Enter number of columns : ";
    cin >> n2;
    int **a= new int*[n1];
    for (int i=0;i<n1;i++){
        a[i]= new int[n2]; 
    }
    int **at= new int*[n2];
    for (int i=0;i<n2;i++){
        at[i]= new int[n1]; 
    }
    Matrix(a,n1,n2);
    Show(a,n1,n2);
    Transpose(a,at,n1,n2);
    Show(at,n2,n1);
    
    for (int i=0;i<n1;i++){
        delete a[i];
    }
    delete [] a;
    for (int i=0;i<n2;i++){
        delete at[i];
    }
    delete [] at;
}