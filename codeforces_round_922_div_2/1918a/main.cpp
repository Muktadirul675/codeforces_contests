#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        if(m % 2 == 0){
            int column_brick_count = m / 2;
            int total_bricks = column_brick_count * n;
            cout <<total_bricks << endl;
        }else{
            int column_brick_count = (m-3) / 2;
            int total_bricks = (column_brick_count * n) + n;
            cout << total_bricks << endl;
        }
    }
    return 0;
}
