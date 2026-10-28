#include <iostream>
using namespace std;
int main() {

    long long N,M;
    cin>>N>>M;
    int lastDigitOfN=N%10;
    int lastDigitOfM=M%10;

    cout<<lastDigitOfN + lastDigitOfM;

    return 0;
}
