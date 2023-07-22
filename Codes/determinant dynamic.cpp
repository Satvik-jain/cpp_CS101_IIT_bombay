#include <iostream>
#include <cmath>
using namespace std;
float **sub_a(float** a,float **m,int n,int k){
    for (int i=1;i<n;i++){
        int p=0;
        for (int j=0;j<n;j++){
            if (j!=k){
                m[i-1][p]=a[i][j];
                p++;
            }

        }
    }
    return m;
}
float determinant(float **a, int n) {
    float det;
    if (n==1){
        return a[0][0];
        }
    float **m= new float *[n-1];
    for (int i=0;i<n-1;i++){
        m[i]=new float [n-1];
    }
    for (int j=0;j<n;j++){
        det+= pow(-1,j)*a[0][j]*determinant(sub_a(a,m,n,j),n-1);
    }
    for (int i = 0; i < n-1; i++) {
        delete m[i];
    }
    delete [] m;
    return det;
}

int main() {
  int n;
  cin >> n;
  float **a= new float *[n];
  for (int i = 0; i < n; i++) {
    a[i] = new float[n];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  cout << determinant(a, n);
  for (int i = 0; i < n; i++) {
    delete a[i];
  }
  delete [] a;
}