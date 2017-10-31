#include <bits/stdc++.h>
using namespace std;

vector<int> G[100001];
int visited[100001];

int DFS(int x) {
    visited[x] = 1;
    int ans = 1;

    for(auto node : G[x]) {
        if(!visited[node]) {
            ans += DFS(node);
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        G[x].push_back(i);
    }

    vector<int> cc;
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            cc.push_back(DFS(i));
        }
    }

    sort(cc.begin(), cc.end());

    long long answer = 0;
    if(cc.size() > 1) {
        for(int i = 0; i < cc.size() - 2; ++i) {
            answer += 1LL * cc[i] * cc[i];
        }

        cout << answer + (long long)((cc[cc.size() - 2] + cc[cc.size() - 1]) * (cc[cc.size() - 2] + cc[cc.size() - 1]));
    } else {
        cout << (long long)(cc[cc.size() - 1] * cc[cc.size() - 1]) ;
    }
    return 0;
}
