#include <iostream>
using namespace std;
void print_arr(int *a,int n){for (int k=0;k<n;k++){cout << a[k] << " ";} cout << endl;}
void bubble_sort(int *a,int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<(n-i-1);j++){
            if (a[j]>a[j+1]){swap(a[j],a[j+1]);}
        }
    }
}
int main(){
    int n; cin >> n; int a[n]; for(int i=0;i<n;i++){cin >> a[i];}
    print_arr(a,n);
    bubble_sort(a,n);
    print_arr(a,n);
}