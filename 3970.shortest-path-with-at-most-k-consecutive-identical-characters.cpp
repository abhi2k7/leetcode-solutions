/*
 * @lc app=leetcode id=3970 lang=cpp
 *
 * [3970] Shortest Path With At Most K Consecutive Identical Characters
 */

// @lc code=start
class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& e : edges)
            adj[e[0]].push_back({e[1], e[2]});

        using ll = long long;
        using State = tuple<ll, int, int, int>;

        priority_queue<State, vector<State>, greater<State>> pq;

        unordered_map<long long, ll> dist;

        auto getKey = [&](int u, int c, int cnt) -> long long {
            return ((long long)u * 26 + c) * (k + 1) + cnt;
        };

        int c = labels[0] - 'a';

        long long start = getKey(0, c, 1);
        dist[start] = 0;
        pq.push({0, 0, c, 1});

        while (!pq.empty()) {
            auto [cost, u, last, cnt] = pq.top();
            pq.pop();

            long long key = getKey(u, last, cnt);

            if (dist[key] != cost)
                continue;

            if (u == n - 1)
                return cost;

            for (auto [v, w] : adj[u]) {
                int next = labels[v] - 'a';
                int newCnt = (next == last) ? cnt + 1 : 1;

                if (newCnt > k)
                    continue;

                long long newCost = cost + w;
                long long newKey = getKey(v, next, newCnt);

                if (!dist.count(newKey) || newCost < dist[newKey]) {
                    dist[newKey] = newCost;
                    pq.push({newCost, v, next, newCnt});
                }
            }
        }

        return -1;
    }
};
// @lc code=end

