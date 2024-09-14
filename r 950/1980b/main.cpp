#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n,f,k; cin >> n >> f >> k;
        int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
        int fav = arr[f-1];
        sort(arr, arr+n, greater<int>());
        int fav_index;
        for(fav_index = 0; fav_index<n;fav_index++){
            if(arr[fav_index] == fav) break;
        }
        int flag = 0, last_fav_index;
        for(int i=0;i<n;i++){
            if(arr[i] == fav) last_fav_index = i;
        }
        if(fav_index <= k-1){
            if(last_fav_index <= k-1) flag = 1;
            else flag = 2;
        }
        switch(flag){
            case 0:
                cout << "No" << endl;
                break;
            case 1:
                cout << "Yes" << endl;
                break;
            case 2:
                cout << "Maybe" << endl;
                break;
        }
    }
    return 0;
}
