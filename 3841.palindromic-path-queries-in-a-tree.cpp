/*
 * @lc app=leetcode id=3841 lang=cpp
 *
 * [3841] Palindromic Path Queries in a Tree
 */

// @lc code=start
class Solution
{
    int n, LOG, timer;
    vector<vector<int>> adj, up;
    vector<int> depth, tin, tout, bit;
    string s;
    vector<int> fenwick;
    void updateBIT(int i, int val)
    {
        for (; i <= n; i += i & -i)
            fenwick[i] ^= val;
    }
    int queryBIT(int i)
    {
        int res = 0;
        for (; i > 0; i -= i & -i)
            res ^= fenwick[i];
        return res;
    }
    void rangeUpdate(int l, int r, int val)
    {
        updateBIT(l, val);
        if (r < n)
            updateBIT(r + 1, val);
    }
    void dfs(int u, int parent)
    {
        tin[u] = ++timer;
        up[u][0] = parent;
        for (int j = 1; j < LOG; j++)
            up[u][j] = up[up[u][j - 1]][j - 1];
        for (int v : adj[u])
        {
            if (v == parent)
                continue;
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
        tout[u] = timer;
    }
    int lca(int u, int v)
    {
        if (depth[u] < depth[v])
            swap(u, v);
        int diff = depth[u] - depth[v];
        for (int j = 0; j < LOG; j++)
        {
            if (diff & (1 << j))
                u = up[u][j];
        }
        if (u == v)
            return u;
        for (int j = LOG - 1; j >= 0; j--)
        {
            if (up[u][j] != up[v][j])
            {
                u = up[u][j];
                v = up[v][j];
            }
        }
        return up[u][0];
    }
    int rootMask(int u)
    {
        return queryBIT(tin[u]);
    }

public:
    vector<bool> palindromePath(int n, vector<vector<int>> &edges, string s, vector<string> &queries)
    {
        this->n = n;
        this->s = s;
        timer = 0;
        LOG = 1;
        while ((1 << LOG) <= n)
            LOG++;
        adj.assign(n, {});
        up.assign(n, vector<int>(LOG, 0));
        depth.assign(n, 0);
        tin.assign(n, 0);
        tout.assign(n, 0);
        fenwick.assign(n + 1, 0);
        bit.resize(n);
        for (int i = 0; i < n; i++)
            bit[i] = 1 << (s[i] - 'a');
        for (auto &e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        dfs(0, 0);
        for (int u = 0; u < n; u++)
            rangeUpdate(tin[u], tout[u], bit[u]);
        vector<bool> answer;
        for (string &q : queries)
        {
            stringstream ss(q);
            string type;
            int u, v;
            ss >> type >> u;
            if (type == "update")
            {
                char c;
                ss >> c;
                int newBit = 1 << (c - 'a');
                int delta = bit[u] ^ newBit;
                if (delta != 0)
                {
                    rangeUpdate(tin[u], tout[u], delta);
                    bit[u] = newBit;
                    s[u] = c;
                }
            }
            else
            {
                ss >> v;
                int w = lca(u, v);
                int mask = rootMask(u) ^ rootMask(v) ^ bit[w];
                answer.push_back((mask & (mask - 1)) == 0);
            }
        }
        return answer;
    }
};

// @lc code=end
