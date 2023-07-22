#include <iostream>
int main()
//table of forst five natural numbers
{
    using namespace std;
    for(int i=1;i<6;i++){
        cout << "\nTable of " << i << " is\n\n";
        for(int j=1;j<11;j++){
            cout << i << " X " << j << " = " << i*j << endl;
                    }
    }
    return 0;

}