#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<pair<int, int>> ans;

void dfs(int u, int p, int c) {
    vis[u] = true;
    ans.push_back(make_pair(c, u));
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, u, c ^ 1);
        } else if (v != p) {
            ans.push_back(make_pair(c ^ 1, u));
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        adj.clear();
        adj.resize(n + 1);
        vis.assign(n + 1, false);
        ans.clear();

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int u = 1; u <= n; u++) {
            if (!vis[u]) {
                dfs(u, -1, 0);
            }
        }

        cout << "Yes" << endl;
        for (auto p : ans) {
            cout << p.first << " " << p.second << endl;
        }
    }

    return 0;
}
