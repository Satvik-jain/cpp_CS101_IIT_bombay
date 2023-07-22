#include <iostream>
int main()
{
    using namespace std;
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int len;
    for (int i=1;;i++){
        num=num/(10);
        if (num==0){
            len=i;
            break;
        }}
    cout << "length of the number is "  << len <<  endl;
}
