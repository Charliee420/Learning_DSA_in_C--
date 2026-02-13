#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long Ax, Ay, Bx, By;
        cin >> n >> Ax >> Ay >> Bx >> By;

        vector<long long> xs(n), ys(n);
        for (int i = 0; i < n; i++) cin >> xs[i];
        for (int i = 0; i < n; i++) cin >> ys[i];

        // group by x -> store [min_y, max_y]
        map<long long, pair<long long,long long>> mp;

        for (int i = 0; i < n; i++) {
            if (!mp.count(xs[i])) {
                mp[xs[i]] = {ys[i], ys[i]};
            } else {
                mp[xs[i]].first = min(mp[xs[i]].first, ys[i]);
                mp[xs[i]].second = max(mp[xs[i]].second, ys[i]);
            }
        }

        vector<pair<long long,long long>> cols;
        for (auto &p : mp)
            cols.push_back({p.second.first, p.second.second});

        // first column
        long long l = cols[0].first;
        long long r = cols[0].second;

        long long dpL = llabs(Ay - r) + (r - l);
        long long dpR = llabs(Ay - l) + (r - l);

        long long pl = l, pr = r;

        // process remaining columns
        for (int i = 1; i < cols.size(); i++) {
            l = cols[i].first;
            r = cols[i].second;
            long long len = r - l;

            long long newL = min(dpL + llabs(pl - r) + len,
                                 dpR + llabs(pr - r) + len);

            long long newR = min(dpL + llabs(pl - l) + len,
                                 dpR + llabs(pr - l) + len);

            dpL = newL;
            dpR = newR;
            pl = l;
            pr = r;
        }

        long long vertical =
            min(dpL + llabs(pl - By),
                dpR + llabs(pr - By));

        long long ans = (Bx - Ax) + vertical;

        cout << ans << '\n';
    }
    return 0;
}
