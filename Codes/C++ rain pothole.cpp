#include<iostream>
#define N 100
using namespace std;
int findWater(int arr[], int n)
{
    int water;
    for (int i=0;i<n-2;i++){

        if ((arr[i+1]<min(arr[i+2],arr[i]))){
            water+=(min(arr[i+2],arr[i])-arr[i+1]);}
    }
    return water;
}

int main()
{
    int a[N];
    int n;
    cin>>n;
    int temp=n, i=0;
    while(temp--){
        cin>>a[i++];
    }
    cout << findWater(a, n);
    return 0;
}

