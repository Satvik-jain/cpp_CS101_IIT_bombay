#include <iostream>
using namespace std;
bool IsMountainPeak(int *A, int n, int &i){
    int ispeak=0,slope=0;
    for (int j=1;j<n;j++)
    {

        if (A[j-1]<A[j]){
            continue;
            }
        else if (A[j-1]>A[j]){
            if (ispeak==0){
                ispeak=(j-1);
            }
            slope+=1;
            }
    }
    if ((slope+ispeak)==(n-1)){
        i=ispeak;
        return 1;
        }
    else return 0;

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=0;
    if(IsMountainPeak(a,n,i)){
        cout << "True" << endl;
        cout << i;
    }
    else {
        cout << "False" << endl;
        cout << -1;}

    }