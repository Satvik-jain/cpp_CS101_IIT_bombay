#include<iostream>
int main()
{
    using namespace std;
    int num;
    cout << "Enter a integer : ";
    cin >> num;
    long int fac=1;
    for(int i=1;i<num+1;i++){
            fac=fac*i;
    }
    cout <<"Factorial is : "<< fac;
    return 0;
}