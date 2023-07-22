#include <iostream>
int main(){
	using namespace std;
	int n;
	cin >> n;
	if ((n<0)||(n%2==0)){
		cout << 0;}
	else if (n%2!=0){
		for (int i=1;i<=n;i++){
			if (i!=(n+1)/2){
				for (int j=1;j<=(n-1)/2;j++){
					cout << " ";}
				cout << "*"<< endl;}
			else if(i==(n+1)/2) {
				for (int k=1;k<=n;k++){
					cout << "*";}
				cout << endl;}}}}