#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int l,r; cin >> l >> r;
        int c = 0;
        while(r>1){
            r /= 2;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
