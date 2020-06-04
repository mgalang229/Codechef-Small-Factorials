#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, j;
	cin >> t;
	while(t--){
		int a[1000]={1};
		int n, m, c;
		cin >> n;
		m=c=0;
		for(int i=1; i<=n; ++i){
			for(int j=0; j<=m; ++j){
				a[j]=(a[j]*i)+c;
				c=a[j]/10;
				a[j]=a[j]%10;
			}
			while(c){
				++m;
				a[m]=c%10;
				c/=10;
			}
		}
		for(int i=m; i>=0; --i){
			cout << a[i];
		}
		cout << "\n";
	}
	return 0;
}
