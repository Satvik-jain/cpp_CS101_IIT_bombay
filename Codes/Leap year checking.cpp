// Program to check if the year is a leap year or not
#include <iostream>
int main()
{
    using namespace std;
    int year;
    cout << "Enter a year to check : ";
    cin >> year;
    if (year%100==0)
    {
        if (year%400==0){cout << "Leap Year";}
        else {cout << "Not a leap year";}
    }
    else if (year%100!=0)
    {
        if (year%4==0){cout << "Leap Year";}
        else {cout << "Not a leap year";}
    }
    else {cout << "Enter a valid year";}
    return 0;
}
