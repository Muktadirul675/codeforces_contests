#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int steps = 0;
        int arr1[n], arr2[n+1];
        for(int i=0;i<n;i++) cin >> arr1[i];
        for(int i=0;i<n+1;i++) cin >> arr2[i];
        int to_append = arr2[n], biggest = arr1[0], biggest_index = 0;
        bool is_big = false;
        for(int i=0;i<n;i++){
            if(biggest < arr1[i]) {biggest = arr1[i];biggest_index = i;}
        }
        if(biggest < to_append) is_big = true;
        if(is_big){
            steps++;
            int arr2_diff = abs(arr1[biggest_index] - arr2[biggest_index]);
            int to_append_diff = to_append - biggest;
            steps += to_append_diff;
            if(!(arr2_diff == to_append_diff)){
                arr1[biggest_index] = to_append;
            }
        }else{steps++;}
        for(int i=0;i<n;i++){
            int a = arr1[i], b = arr2[i];
            int d = a - b;
            steps += abs(d) ;
        }
        cout << steps << endl;
    }
    return 0;
}
