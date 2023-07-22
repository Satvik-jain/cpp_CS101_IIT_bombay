#include <iostream>
int const MAX=20;
using namespace std;
void sparse_vector_add (int vals1[MAX], int vals2[MAX], int vals3[MAX], int indices1[MAX], int indices2[MAX], int indices3[MAX], int k1, int k2, int& k3){
    int i1=0,i2=0,i3=0;
    while((i2!=k2)&&(i1!=k1)){
        if (indices1[i1]==indices2[i2]){
            indices3[i3]=indices1[i1];
            vals3[i3]=vals1[i1]+vals2[i2];
            i1++,i2++,i3++;
        }
        else if (indices1[i1]>indices2[i2]){
            vals3[i3]=vals2[i2];
            indices3[i3]=indices2[i2];
            i2++,i3++;
        }
        else if (indices1[i1]<indices2[i2]){
            vals3[i3]=vals1[i1];
            indices3[i3]=indices1[i1];
            i1++,i3++;
        }
    }
    if(k1>k2){
        while (i1!=k1){
            vals3[i3]=vals1[i1];
            indices3[i3]=indices1[i1];
            i1++,i3++;
        }
    }
    if(k1<k2){
        while (i2!=k2){
            vals3[i3]=vals2[i2];
            indices3[i3]=indices2[i2];
            i2++,i3++;
        }
    }
    k3=i3;
}
int main(){
    int k1,k2,k3,vals1[MAX],vals2[MAX],vals3[MAX],indices1[MAX],indices2[MAX],indices3[MAX];
    cin >> k1 >> k2;
    for (int i=0;i<k1;i++){
        cin >> vals1[i];
    }
    for (int i=0;i<k1;i++){
        cin >> indices1[i];
    }
    for (int i=0;i<k2;i++){
        cin >> vals2[i];
    }
    for (int i=0;i<k2;i++){
        cin >> indices2[i];
    }
    sparse_vector_add (vals1,vals2,vals3,indices1,indices2,indices3,k1,k2,k3);
    int a3[MAX]={0};
    int k=0;
    while (k!=k3){
        a3[indices3[k]]=vals3[k];
        k++;
    }
    for (int i=0;i<MAX;i++){
        cout << a3[i] << " ";
    }
    }