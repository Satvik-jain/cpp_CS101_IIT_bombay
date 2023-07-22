#include <iostream>
int main()
//Calculate cost of product by taking quantity and cost as input
//if the cost is more than 100 give 5% discount
//if the cost is more than 1000 give 10% discount 
//if the cost is more than 10000 give 20% discount
{using namespace std;
int cost,item;
cout <<"Enter the number of items : ";
cin >> item;
cout <<"Enter the cost of an item : ";
cin >> cost;
int net = cost*item;
if (net >100 && net <= 1000)
{
    cout << "Hurray! You got a 5 % Discount\nCost : " << net << "\nDiscount Applied\n";
    cout << "Total Cost : " <<  net-net*(0.05) ;
}
else if (net >1000 && net <=10000)
{
    cout << "Hurray! You got a 10 % Discount\nCost : " << net << "\nDiscount Applied\n";
    cout << "Total Cost : " <<  net-net*(0.1) ;
}
else if (net >10000)
{
    cout << "Hurray! You got a 20 % Discount\nCost : " << net << "\nDiscount Applied\n";
    cout << "Total Cost : " <<  net-net*(0.2) ;
}
else {
    cout << "No Discount Applied\nTotal Cost : "<< net;
}
cout << "\nThanks for shopping";
return 0;
}