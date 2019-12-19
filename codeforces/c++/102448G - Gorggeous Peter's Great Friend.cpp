#include <bits/stdc++.h>
#define ll long long
#define si pair<string,int>
 
using namespace std;
 
int main()
{
    ll c,p,s,score;
    string user, problem, submission;
    map<string, int> users;
    map<string, int> problems;
    
    cin >> c >> p >> s;
    
    for (int i = 0;i < c;i++) {
        cin >> user;
        users.insert(si(user, 0)); 
    }
    for (int i = 0;i < p;i++) {
        cin >> problem >> score;
        problems.insert(si(problem, score));
    }
    for (int i = 0;i < s;i++) {
        cin >> user >> problem >> submission;
        if (submission == "AC") {
            if (users.find(user) != users.end()) {
                users[user] += problems[problem];
            }
        }
    }
    for (auto i: users) {
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}
