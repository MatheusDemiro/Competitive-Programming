#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll N = 1e9 + 10;

ll bs(ll n, int k) {
	int l = 1;
	int r = n;
	ll value = N;
	while (l <= r) {
		ll mid = (l+r)/2;
		ll sum = mid;
		int exp = 1;
		while (1) {
			int div = mid/(pow(k,exp));
			if (div == 0) {
				break;
			}
			sum += div;
			exp += 1;
		}
		if (sum == n) {
			return mid;
		}
		if (sum < n) {
			l = mid + 1;
		}
		else {
			if (value > mid) {
				value = mid;
			}
			r = mid -1;
		}
	}
	return value;
}
				

int main(){
	ll n;
	int k;
	
	cin >> n >> k;	
	
	cout << bs(n,k);
}
