#include <iostream>
int main()
{
    using namespace std;
    int sum;
    int num;
    for(int i=0;i<5;i++){
        cout << "Enter number " << i+1 << " : " ;
        cin >> num;
        sum=sum + num;
    }
    cout << "Sum of numbers is : " << sum;
    return 0;
}