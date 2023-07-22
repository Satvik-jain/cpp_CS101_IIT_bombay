#include <iostream>
int main()
{
    using namespace std;
    int num, choice;
    cout << "Enter a number : ";
    cin >> num;
    cout << "ODD or EVEN\nEnter 1 for ODD\nEnter 2 for Even" << endl;
    cin >> choice;
    if (choice == 1){
        for (int i=1;i<=num;i+=2)
        cout <<  i << endl;
    }
    else if (choice == 2){
        for (int i=0;i<=num;i+=2)
        cout << i << endl;
    }
}