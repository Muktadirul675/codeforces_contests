#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int t;cin >> t;
    for(int i=0;i<t;i++){
        int a,b,r;
        cin >> a >> b >> r;
        int axorr = a^r;
        int bxorr = b^r;
        int smallest = abs(axorr - bxorr);
        for(int i=0;i<=r;i++){
            int axori = a^i;
            int bxori = b^i;
            int diff = abs(axori - bxori);
            if(diff < smallest){
                smallest = diff;
            }
        }
        cout << smallest << endl;
    }
    return 0;
}
