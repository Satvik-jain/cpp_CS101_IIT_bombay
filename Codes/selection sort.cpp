#include <iostream>
using namespace std;
void print_arr(int *a,int n){for (int k=0;k<n;k++){cout << a[k] << " ";} cout << endl;}
void selection_sort(int *a,int n){
    for (int j=0;j<n;j++){
        int index=j;
        for (int i=j;i<n;i++){if (a[index]>a[i]){index=i;}}
        cout << a[index] << endl;
        swap(a[index],a[j]);
        print_arr(a,n);}
}
int main(){
    int n; cin >> n; int a[n]; for(int i=0;i<n;i++){cin >> a[i];}
    print_arr(a,n);
    selection_sort(a,n);
    print_arr(a,n);
}