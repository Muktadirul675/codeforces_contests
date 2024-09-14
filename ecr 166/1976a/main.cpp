#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        string s; cin >> s;
        bool valid = true;
        for(int i=0;i<s.length()-1;i++){
            if(s[i] > s[i+1]) {
                valid = false;
                break;
            }
        }
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
