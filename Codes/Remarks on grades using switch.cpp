#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your grades : ";
    cin >> grade;
    switch(grade){
        case 'A' :
        cout << "Excellent";
        break;
        case 'B' :
        cout << "Good";
        break;
        case 'C' :
        cout << "Poor";
        break;
        default :
        cout << "Enter valid grades in capital";
    }
}