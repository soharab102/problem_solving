#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {

    int t;
    cin>>t;


    while(t--){
        int n,m;
        cin>>n>>m;

        string p,q;
        cin>>p>>q;

        for(int i=0; i<p.length(); i++){
            for(int j=0; j<q.length(); j++){
                if(p[i]==q[j]){
                    p.erase(i,1);
                    q.erase(j,1);
                    i--;
                    break;
                }
            }
        }



        sort(p.begin(), p.end());

        if (p == "isx" && q.empty()) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }



    }


    return 0;
}