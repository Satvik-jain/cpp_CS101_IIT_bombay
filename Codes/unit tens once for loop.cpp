#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter a number : ";
    int num;
    cin >> num;
    int len=1, val;
    for(bool loop=true;loop==1;){
        int lastnum;
        val=num%10;
        num=num/10;
        if (num == 0){
            loop=0;
            cout << "Digit at " << len << "th place is  : " << lastnum << endl;
        }
        else {
            cout << "Digit at " << len << "th place is  : " << val << endl;
            len+=1;
            lastnum=num;
        }
    }
    cout << "Number of digits = " << len;
    return 0;
}