#include <iostream>
using namespace std;
char low_char()
{
    char var;
    cout << "Enter Upper char : ";
    cin >> var;
    return var+32;

}
int main()
{
    cout<< "Upper case to lower case" << endl;
    char a = low_char();
    cout << "Lower char : " << a;
}