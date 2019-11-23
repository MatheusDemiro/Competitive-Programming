#include <bits/stdc++.h>
 
int main()
{
    long long int q, a, b, n, S, res;
    std::cin >> q;
    for (int i=0;i < q;i++) {
        std::cin >> a >> b >> n >> S;
        res = a*n;
        if (S%n <= b && res+b >= S) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
    }
 
    return 0;
}
