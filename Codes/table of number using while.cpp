#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter a number : ";
    int num;
    cin >> num;
    int i=1;
    while (i<11){
        cout << num << " X " << i << " = " << num*i << endl;
        i++;
    }
    return 0;
}