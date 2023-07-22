#include <iostream>
int main(){
    using namespace std;
    int num;
    cin>> num;
    int isprime=0;
    for (int i=1;i<num;i++){
        if (num%i==0){
            isprime++;
        }
    }
    if (isprime ==1){cout << "the number is prime";}
    else {cout << "the number is not prime";}
}