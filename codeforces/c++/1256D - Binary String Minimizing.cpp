#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long q;
    cin >> q;
    for (int j = 0;j < q;j++) {
        long long n,k;
        long long qtd1 = 0;
        cin >> n >> k;
        char c[n];
        cin >> c;
        for (int i = 0;i < n;i++){
            if (c[i] == '1') {
                qtd1++;
            } else if (k > 0) {
                if (qtd1 == 0) continue;
                else if(c[i] == '0' && k >= qtd1) {
                    c[(i+1)-qtd1-1] = '0';
                    c[i] = '1';
                    k-=qtd1;
                }
                else {
                    c[abs(i-k)] = '0';
                    c[i] = '1';
                    break;
                }
            }
        }
        cout << c;
        cout << endl;
    }
 
    return 0;
}
