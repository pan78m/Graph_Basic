
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v[5];
//    freopen("list.txt", "r", stdin);

//     int nodes, edges;
//     cin >> nodes >> edges;
//     int n1, n2;
//     for (int i = 0; i < edges; i++)
//     {
//         cin >> n1 >> n2;
//         v[n1].push_back(n2);
//         v[n2].push_back(n1);
//     }
//     for (int i = 0; i < v[3].size(); i++)
//     {
//         cout << v[3][i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<int> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex "
        << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    int V = 5;

    // Create a graph
    vector<int> adj[V];

    // Add edges
    int edge = 4;
    int n1, n2;
    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        addEdge(adj, n1, n2);
    }

    //   addEdge(adj, 0, 1);
    //   addEdge(adj, 0, 2);
    //   addEdge(adj, 0, 3);
    //   addEdge(adj, 1, 2);
    printGraph(adj, V);
}
