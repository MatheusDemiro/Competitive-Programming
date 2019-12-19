#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int n, cnt, sum;
ll ti;
 
int main(){	
	priority_queue<int, vector<int>, greater<int>> pq;
	
	cin >> n;
	
	for(int i = 0;i < n;i++) {
		cin >> ti;
		pq.push(ti);
	}
	
	while (!pq.empty()) {
		int element = pq.top();
		pq.pop();
		if (element >= sum) {
			cnt++;
			sum += element;
		}
	}
	
	cout << cnt;
	
	return 0;
}
