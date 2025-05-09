#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int u;
    int index;
    Node(int u, int index) : u(u), index(index) {}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &ai : a)
    {
        cin >> ai;
    }
    vector<vector<int>> grap(n + 1);
    for (int i = 0; i < n; ++i)
    {
        int u = a[i];
        grap[u].push_back(i + 1);
    }

    vector<int> visited(n + 1, 0);
    stack<Node> stack;
    bool huan = false;

    stack.push(Node(x, 0));
    visited[x] = 1;

    while (!stack.empty())
    {
        Node current = stack.top();
        stack.pop();
        int u = current.u;
        int &idx = current.index;

        if (idx < grap[u].size())
        {
            int v = grap[u][idx];
            idx++;
            stack.push(current);

            if (visited[v] == 1)
            {
                huan = true;
                break;
            }
            if (visited[v] == 0)
            {
                visited[v] = 1;
                stack.push(Node(v, 0));
            }
        }
        else
        {
            visited[u] = 2;
        }
    }

    cout << (huan ? "Yes" : "No") << endl;

    return 0;
}