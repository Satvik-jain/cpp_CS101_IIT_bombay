#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,newnum,numcheck;
    cout << "Enter the number : ";
    cin >> num;
    numcheck=num;
    for (int i;;)
    {
        newnum = newnum+pow(num%10, 3);
        num=num/10;
        if (num==0){break;}
    }
    if (newnum== num){cout << "The number is armstrong.";}
    else {cout << "The number is not armstrong. " ;}
}