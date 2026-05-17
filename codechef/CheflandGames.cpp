#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {

        int R[4];

        for(int i = 0; i < 4; i++) {
            cin >> R[i];
        }

        if(R[0] == 0 && R[1] == 0 && R[2] == 0 && R[3] == 0) {
            cout << "IN\n";
        }
        else {
            cout << "OUT\n";
        }
    }

    return 0;
}