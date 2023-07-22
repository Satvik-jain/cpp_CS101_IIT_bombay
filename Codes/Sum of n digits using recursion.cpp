#include <iostream>
int sum(int x){
  if (x>1){
    return x+sum(x-1);}
  else{
    return 1;
  }}
int main(){
  using namespace std;
  int n;
  cin >> n;
  cout << sum(n);
}