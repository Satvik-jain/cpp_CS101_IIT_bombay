#include <iostream>
using namespace std;
void swap(int *p, int *q){
  int t;
  t=*p;
  *p=*q;
  *q=t;
}

int main(){
  int x=4,y=5;
  swap(&x,&y);
  cout << x << " " << y;
  return 0;
}