#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i=1;i<=2*num+1;i++){
        for (int j=1;j<=2*num+1;j++){
                    if (((i+j)==(2*(num+1))) || ((i+j)==(2*(i)))  ){
                        cout << "*";
                    }
                    else{
                        cout << " ";
                    }
                    
                    }
                    cout<< endl;
    }}