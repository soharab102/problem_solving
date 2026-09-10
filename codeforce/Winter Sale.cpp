#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   double X,P;
   cin>>X>>P;
   double actualPrice=(P*100)/(100-X);
   cout<<fixed<<setprecision(2)<<actualPrice;

    return 0;
}/*

The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
InputCopy
20 80
OutputCopy
100.00
InputCopy
15 20
OutputCopy
23.53
*/