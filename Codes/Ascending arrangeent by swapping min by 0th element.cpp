#include <iostream>
using namespace std;

void minterm(int *A,int n){
    int index;
    for (int j=0;j<n;j++){
        bool m=1;
        int min=A[j];
        for (int i=(j+1);i<n;i++){
            if (min>A[i]){
                min=A[i];
                index=i;
                m=0;
                }
        }
        if (!m){swap(A[j],A[index]);}
        }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    minterm(a,n);
    for (int i=0;i<n;i++){
        cout << a[i];
        if (i!=(n-1)){cout << " ";}
    }
}