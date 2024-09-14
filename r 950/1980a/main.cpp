#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int problems[7] = {0,0,0,0,0,0,0};
        string s; cin >> s;
        for(char c: s){
            switch(c){
                case 'A':
                    problems[0] = problems[0] + 1;
                    break;
                case 'B':
                    problems[1] = problems[1] + 1;
                    break;
                case 'C':
                    problems[2] = problems[2] + 1;
                    break;
                case 'D':
                    problems[3] = problems[3] + 1;
                    break;
                case 'E':
                    problems[4] = problems[4] + 1;
                    break;
                case 'F':
                    problems[5] = problems[5] + 1;
                    break;
                case 'G':
                    problems[6] = problems[6] + 1;
                    break;
            }
        }
        int c = 0;
        for(int i:problems){
            if(i < m){
                c+= m-i;
            }
        }
        cout << c << endl;
    }
    return 0;
}
