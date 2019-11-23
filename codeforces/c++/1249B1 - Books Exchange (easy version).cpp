#include<bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int q, n, c, f, child, cnt;
int ms = 200 + 20;
 
int main()
{
    cin >> q;
    for (int i=0; i < q; i++) {
        cin >> n;
        vector<int> a;
        for (int j=0; j < n; j++) {
            cin >> c;
            a.push_back(c);
        }
        vector<int> days;
        for (int i=0; i<n; i++) {
            f = a[a[i]-1];
            if (a[i] == f) {
                days.push_back(1);
                continue;
            } else if (f-1 == i) {
                days.push_back(2);
                continue;
            } else {
                child = a[f-1];
                cnt = 2;
                for (int j=2; j < n; j++) {
                    cnt++;
                    if (child-1 == i) {
                        days.push_back(cnt);
                        break;
                    }
                    child = a[child-1];
                }
            }
        }
        for (int i=0; i<n;i++) { 
            cout << days[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
