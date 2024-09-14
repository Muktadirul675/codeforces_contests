#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n,m; cin >> n >> m;
        int arr_size = n+m+1;
        int a[arr_size], b[arr_size];
        for(int i=0;i<arr_size;i++) cin >> a[i];
        for(int i=0;i<arr_size;i++) cin >> b[i];
        for(int i=0;i<arr_size;i++){
                int skills = 0;
                int seats_n = n, seats_m = m;
                for(int j=0;j<arr_size;j++){
                    if(j != i){
                        string is;
                        int aj = a[j], bj = b[j];
                        if(aj > bj) is = "p";
                        else is = "t";
                        if(is == "p"){
                            if(seats_n){
                                skills += aj;
                                seats_n--;
                            }else{
                                skills += bj;
                                seats_m--;
                            }
                        }else{
                             if(seats_m){
                                skills += bj;
                                seats_m--;
                            }else{
                                skills += aj;
                                seats_n--;
                            }
                        }
                    }
                }
                cout << skills << ' ';
        }
        cout << endl;
    }
    return 0;
}
