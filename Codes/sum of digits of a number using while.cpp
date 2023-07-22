#include <iostream>
int main()
{
    using namespace std;
    //sum of digits of a number
    cout << "Enter the number : ";
    int num;
    cin >> num;
    int sum;
    while (num!=0){
        int val=num%10;
        num=num/10;
        sum=val+sum;
    } 
    cout << "Sum : " << sum ;
    return 0;
}