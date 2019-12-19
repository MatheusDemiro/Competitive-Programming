#include <bits/stdc++.h>

using namespace std;

const int ms = 100 + 10;

int main(){
	int t;
	
	cin >> t;
	
	for(int i = 0;i < t;i++){
		int n,k,d,a;
		cin >> n >> k >> d;
		
		vector<int> v;
		int res = ms;
		
		for(int j = 0;j < n;j++){
			cin >> a;
			v.push_back(a);
		}
		
		for(int z = 0;z < n-d+1;z++){
			set<int> s(v.begin()+z, v.begin()+d+z);
			int size = s.size();
			res = min(res,size);
		}
	
		cout << res << endl;
	}
	
	return 0;
}
