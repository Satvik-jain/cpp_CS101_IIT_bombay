#include <iostream>
#include <cmath>
/*  In question we were told to use this format
float determinant (float A[][MAX], int n1, int n2)
not mentioned what to take n1 and what to take n2,
frame a question properly. */
using namespace std;
int const MAX=100;
float determinant(float a[][MAX], int n) {
  if (n == 1) {
    return a[0][0];
  }
  if (n == 2) {
    return a[0][0] * a[1][1] - a[1][0] * a[0][1];
  }
  float det = 0;
  for (int j = 0; j < n; j++) {
    float subarr[MAX][MAX];
    for (int i = 1; i < n; i++) {
      int sub_i = 0;
      for (int j1 = 0; j1 < n; j1++) {
        if (j1 == j) {
          continue;
        }
        subarr[sub_i][i - 1] = a[i][j1];
        sub_i++;
      }
    }
    det += pow(-1, j) * a[0][j] * determinant(subarr, n - 1);
  }
  return det;
}

int main() {
  int n;
  cin >> n;
  float a[MAX][MAX];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  cout << determinant(a, n);
}