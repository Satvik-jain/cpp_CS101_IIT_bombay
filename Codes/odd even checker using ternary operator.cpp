#include <iostream>
int main()
{
    using namespace std;
    cout <<"Enter a number : ";
    int num;
    cin >> num;
    (num % 2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}