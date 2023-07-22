#include <iostream>
using namespace std;
int const MAX=100;
void print(int n1,int n2,int a[MAX][MAX]){
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n1,n2;
    cout << "Enter rows : ";
    cin >> n1;
    cout << "Enter coloumns : ";
    cin >> n2;    
    int a[MAX][MAX];
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cin >> a[i][j];
        }
    }
    cout << "Earlier Matrix : " <<  endl;
    print(n1,n2,a);
    int b[MAX][MAX];
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            b[j][n1-i-1] = a[i][j];
        }
    }
    cout << "Rotated Matrix : " << endl;
    print(n2,n1,b);
}
