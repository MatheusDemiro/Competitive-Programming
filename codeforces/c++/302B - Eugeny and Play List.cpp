#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n,m,v;
	ll totalMin = 0;
	ll c,t;
	
	vector<int> minutes;
	
	cin >> n >> m;	
	
	for(int i = 0;i < n;i++){
		cin >> c >> t;
		totalMin += c*t;
		minutes.push_back(totalMin);
	}
	
	for(int i =0;i < m;i++){
		cin >> v;
		int low = lower_bound(minutes.begin(), minutes.end(), v) - minutes.begin();
		cout << low+1 << endl;
	}
}
