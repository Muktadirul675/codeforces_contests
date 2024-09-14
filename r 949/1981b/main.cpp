#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;

        int ind = 1;
        int num = 0;
        int ans = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                ans += ind;
                num += ind;
            } else {
                int x = min(ind - num, num + 1);
                if (x <= m) {
                    ans += ind;
                }
            }
            ind *= 2;
            n /= 2;
        }

        while (ind - num <= m) {
            ans += ind;
            ind *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
