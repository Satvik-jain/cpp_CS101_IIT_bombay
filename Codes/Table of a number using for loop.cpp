#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the number to display its table : ";
    int num;
    cin >> num;
    cout << "Table of " << num << " is : \n";
    for(int i=1;i<11;i+=1){
        cout << num << " " << i << "\'s are " << num*i << "\n" ;
    }
}