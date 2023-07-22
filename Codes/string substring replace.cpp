#include <iostream>
using namespace std;
int len(char *s){
    int i;
    for (i=0;i<20;i++){
        if (s[i]=='\0'){break;}
    }
    return i;}
bool present(char *s1,char *s2,int &index){
    for (int i=0;i<len(s1);i++){
        int securei=i;
        int j=0;
        int yes=0;
        if(s1[i]==s2[j]){
            for (;j<len(s2);i++,j++){
                if(s1[i]==s2[j]){
                    yes++;
                }
            }
            if(yes==len(s2)){
                index=i-j;
                return 1;
            }
            else i=securei;
        }
    }
    return 0;
}
void replace(char *s1,char *s2,char *s3,char *s4,int index){
    for (int i=0;i<index;i++){
        s4[i]=s1[i];
    }
    for (int i=index,j=0;i<index+len(s3),j<len(s3);i++,j++){
        s4[i]=s3[j];
    }
    for (int i=index+len(s2),j=index+len(s3);i<len(s1);i++,j++){
        s4[j]=s1[i];
    }
}
int main(){
    char s1[20],s2[20],s3[20],s4[20];
    cout << "Enter str1 : ";
    cin >> s1;
    cout << "Entr str2 : ";
    cin >> s2;
    int index;
    if (present(s1,s2,index)){
        cout << "s2 is substr of s1" << endl;
        cout << "Enter s3 to replace s2 : ";
        cin >> s3;
        replace(s1,s2,s3,s4,index);
        cout << s4;
    }
    else cout << "s2 is not substr of s1";
}