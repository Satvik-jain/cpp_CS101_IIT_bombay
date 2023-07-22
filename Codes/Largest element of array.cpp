#include <iostream>
int main(){
    using namespace std;
    cout << "Enter the number of elements in array : ";
    int n;
    cin >> n;
    int array[n];
    for (int i=0;i<n;i++){
        cout << "Enter element number " << i+1 << " : ";
        cin >> array[i];}
    int largest=array[0];
    for (int i=1;i<=(n-1);i++){
        if (array[i]>largest){
            largest=array[i];}}
    cout << "Largest element is " << largest;
    return 0;}