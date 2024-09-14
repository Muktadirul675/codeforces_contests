#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n,a,b,k; cin >> n >> a >> b;
		int bc = b, nc = n;
		if(b<=a){
			k=0;
		}else{
			k = 0;
			while(bc-- != a && k++ <=n);
		}
		if(k>n) k--;
		long long int price = 0;
		if(k==0){
			price = static_cast<long long int>(a) * static_cast<long long int>(n);
			cout << price << endl;
		}else{
			for(int i=1;i<=k;i++){
				price += static_cast<long long int>(b-i+1) ;
			}
			for(int i=1;i<=n-k;i++) price += static_cast<long long int>(a) ;
			cout<<price << endl;
		}
	}
	return 0;
}
