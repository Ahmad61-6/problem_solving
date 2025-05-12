#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d, q;
    cin >> n >> d >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string s;
    cin >> s;

    vector<pair<int, int>> movableDancers;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            movableDancers.push_back(make_pair(a[i], i + 1));
        }
    }

    sort(movableDancers.begin(), movableDancers.end());

    while (q--) {
        int k, m;
        cin >> k >> m;

        int ans = a[m - 1];

        for (auto& dancer : movableDancers) {
            int pos = dancer.first + (k - 1) * d;
            if (pos >= ans) {
                break;
            }

            int cnt = 0;
            while (pos >= ans && cnt < d) {
                cnt++;
                dancer.first++;
                pos = dancer.first + (k - 1) * d;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
