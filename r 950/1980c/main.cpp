#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        int m; cin >> m;
        int d[m]; for(int i=0;i<m;i++) cin >> d[i];
        vector<int> m_found;
        cout << 1;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]) m_found.push_back(b[i]);
        }
        cout << 2;
        if(m_found.size()){
            cout << 3;
            int is = true;
            for(int i=0;i<m_found.size();i++){
                cout << 1;
                bool f = false;
                for(int j=0;j<m;j++){
                cout << 2;
                    if(d[j] == m_found[i]){
                        f = true;
                        break;
                    }
                }
                if(!f){
                    is = false;
                    break;
                }
            }
            if(is){
                cout << "YES" << endl;
            }
        }else{
        cout << 3;
            if(m>0){
                bool is = true;
                for(int i=0;i<n;i++){
                    int c = 0;
                    for(int j=0;j<m;j++){
                        if(a[i] == d[j]) c++;
                    }
                    if(c % 2){
                        is = false;
                        break;
                    }
                }
                if(is) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
    return 0;
}

















