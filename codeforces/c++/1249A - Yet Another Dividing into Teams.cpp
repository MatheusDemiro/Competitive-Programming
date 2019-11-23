#include<bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int q, n, c, qtd;
 
int main()
{
    cin >> q;
    for (int i=0; i < q; i++) {
        cin >> n;
        vector<int> a;
        bool flag = false;
        for (int j=0; j < n; j++) {
            cin >> c;
            a.push_back(c);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i){
            if (abs(a[i]-a[i-1]) <= 1) {
                flag = true;
                break;
            }
        }
        if (flag) {
            puts("2");
        } else {
            puts("1");
        }
    }
    
    return 0;
}
