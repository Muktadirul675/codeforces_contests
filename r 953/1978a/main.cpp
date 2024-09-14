#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n], highest = 0, highestIndex = 0;
	    for(int i=0;i<n;i++){
	    	cin >> arr[i];
	    	if(arr[i] >= highest){
	    		highest = arr[i];
	    		highestIndex = i;
	    	}
	    }
	    if(highestIndex == n-1){
	    	int highest2 = arr[0];
	    	for(int i=1;i<n-1;i++){
	    		if(highest2<arr[i]) highest2 = arr[i];
	    	}
	    	cout << highest+highest2 << endl;
	    }else{
	    	int highest2 = arr[n-1];
	    	cout << highest+highest2 << endl;
	    }
	}
	return 0;
}
