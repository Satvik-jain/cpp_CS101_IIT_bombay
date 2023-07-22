#include <iostream>
using namespace std;
int len(char *s){
    int i;
    for (i=0;i<20;i++){
        if (s[i]=='\0'){break;}
    }
    return i;}
void selection_sort(char *a,int n){
    for (int i=0;i<n;i++){
        int index = 0;
        for (int j=0;j<n-i;j++){
            if (a[j]>a[index]){
                index=j;
                }
        }
        swap(a[n-1-i],a[index]);
    }
}
int main (){
    char a[10],b[10],c[10];
    cout << "S1: ";
    cin  >> a;
    cout << "S2: ";
    cin  >> b;
    int j=0;
    for (int i=0;i<10;i++){
        if (a[i]!=b[i]){
            if (a[i]=='\0'){
                for (int k=j;k<10;k++){c[k]=b[i]; i++;}
                break;
            }
            else if (b[i]=='\0'){
                for (int k=j;k<10;k++){c[k]=a[i]; i++;}
                break;
            }
            c[j++]=a[i];
            c[j++]=b[i];
        }
    }
    cout << c<<endl;


    selection_sort(c,len(c));
    cout << c;
}