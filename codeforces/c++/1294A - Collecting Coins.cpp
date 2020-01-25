#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
 
using namespace std;
 
int q;
long long a,b,c,n,cnt,m;
 
int main()
{
    SPEED;
    
    cin >> q;
    
    for(int i = 0;i < q;i++) {
        cin >> a >> b >> c >> n;
        cnt = 0;
        
        m = max(c,max(a,b));
        cnt = n-(abs(m-a) + abs(m-b) + abs(m-c));
        
        if (cnt % 3 == 0 && cnt >= 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }   
    }
 
    return 0;
}
