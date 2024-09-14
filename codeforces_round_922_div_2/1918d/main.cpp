#include <iostream>
#include<algorithm>
using namespace std;

int blockCost(int * arr, int n, int a, int b){
for(int i=0;i<n;i++) cout << *(arr+i) << "\n" << endl;
    int firstSubArrLength = a-1;
    int secondSubArrLength = b - a -1;
    int lastSubArrLength = n-b;
    int blockItemCost = arr[a] + arr[b];
    int firstSubArrSum = 0;
    for(int i=0;i<a;i++){
        firstSubArrSum += arr[i];
    }
    int secondSubArrSum = 0;
    for(int i=a+1;i<b;i++){
        secondSubArrSum += arr[i];
    }
    int lastSubArraySum = 0;
    for(int i=b+1;i<n;i++){
        lastSubArraySum += arr[i];
    }
    return max({blockItemCost,firstSubArrSum,secondSubArrSum,lastSubArraySum});
}

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[n];
        }
        int minimun_cost = blockCost(arr,n,1,2);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j){
                    int cost = blockCost(arr,n,i,j);
                    if(cost < minimun_cost){
                        minimun_cost = cost;
                    }
                }
            }
        }
        cout << minimun_cost << endl;
    }
    return 0;
}
