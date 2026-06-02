#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        int x = i;
        int digitSum = 0;

        while (x > 0) {
            digitSum += x % 10;
            x /= 10;
        }

        if (digitSum >= A && digitSum <= B) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}


