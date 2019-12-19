#include <bits/stdc++.h>
#define ll long long

const ll MAX = 1e6 + 5;

using namespace std;

ll n;
ll sum[MAX];

ll BINARY_SEARCH(ll value) {
    ll s = 1;
    ll e = n;
    ll v = 0;
    while(s <= e) {
        ll mid = (s + e) / 2;
        if(sum[mid] == value) {
			return mid;
		}
        else if (sum[mid] > value) {
			e = mid - 1;
			v = mid;
		}
        else {
			s = mid + 1;
			v = mid+1;
		}
    }
    return v;
}

int main()
{
    ll m, a, l;
    
    cin >> n;
    
    for(int i = 1;i <= n;i++) {
        cin >> a;
        sum[i] = sum[i-1] + a;
    }
    cin >> m;
    
    for(int i = 0;i < m;i++) {
		cin >> l;
		cout << BINARY_SEARCH(l) << endl;
    }
    
    return 0;
}
