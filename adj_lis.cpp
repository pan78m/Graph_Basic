#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> Vec[], int a, int b)
{
    Vec[a].push_back(b);
    Vec[b].push_back(a);
}
void printG(vector<int> Vec[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << "List"
             << "-"
             << i << ":";
        for (auto x : Vec[i])
            cout << "->" << x;
        cout << "\n";
    }
}
int main()
{
    int n=5, e=6;
    // printf("\nEnter the edges and nodes:\n");
    // cin >> n >> e;
    vector<int> Vec[n];
    int a, b;
    for (int i = 0; i < 4; i++)
    {
        cin >> a >> b;
        addEdge(Vec, a, b);
    }
    printG(Vec, n);
    return 0;
}