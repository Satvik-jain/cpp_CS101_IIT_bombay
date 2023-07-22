#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int num,newnum,numstored;
    cout << "Enter the number : ";
    cin >> num;
    numstored=num;
    int len;
    for (int i=1;;i++){
        num=num/(10);
        if (num==0){
            len=i;
   
            break;
        }}
    cout << "length of the number is "  << len <<  endl;
    //palindrome
    num=numstored;
    for (int i=1;i<=len;i++)
    {
        newnum=newnum+((num%10)*pow(10,(len-i)));
        num=num/10;
        if (num==0){
            len=i;
            break;
        }
    }
    if (newnum==numstored){
        cout <<"Number is a Palindrome.";
    }
    else{
        cout<< "Number is not a Palindrome.";
    }
    return 0;}