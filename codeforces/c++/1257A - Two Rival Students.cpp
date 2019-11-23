#include <bits/stdc++.h>

int a,b;

int max(int c, int d) {
    if (c > d) {
        a = c;
        b = d;
        return c;
    } else {
        a = d;
        b = c;
        return d;
    }
}

int main()
{
    int n, x, t, maxi;
    std::cin >> t;
    for (int i=0;i < t;i++) {
		std::cin >> n >> x >> a >> b;
		if (x == 0 || (a == n && b == 1) || (b == n && a == 1)) {
		    std::cout << abs(a-b) << std::endl;
		    continue;
		}
		maxi = max(a,b);
		//Posso andar n-x vezes
		int canWalk = n-maxi;
		if (canWalk >= x) {
		    std::cout << abs((a+x)-b) << std::endl;
		} else {
		    x-=canWalk;
		    a = a+canWalk;
		    canWalk = (b%n)-1;
		    if (canWalk == 0) {
		        std::cout << abs(a-b) << std::endl;
		    }
		    else if (canWalk <= x) {
		        std::cout << abs(a-(b-canWalk)) << std::endl;
		    } else {
		        std::cout << abs(a-(b-x)) << std::endl;
		    }
		}
    }
    return 0;
}
