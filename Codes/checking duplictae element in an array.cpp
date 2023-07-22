#include <iostream>
int main(){
    using namespace std;
    cout << "Enter the number of elements in array : ";
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cout << "Enter element number " << i+1 << " : ";
        cin >> a[i];}
    bool logic=true;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j])
            {
                logic=false;
                cout << "Duplicate is present";
                break;
            }
        }
    if (!logic) break;
    }
    if (logic) cout << "No duplicate";
}