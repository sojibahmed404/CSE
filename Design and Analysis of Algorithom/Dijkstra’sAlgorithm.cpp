#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {

    int nodes, edges;

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> graph(nodes, vector<int>(nodes, 0));

    cout << "Enter edges and weights (u v w):" << endl;

    for(int i = 0; i < edges; i++) {

        int u, v, w;
        cin >> u >> v >> w;

        graph[u][v] = w;
        graph[v][u] = w;
    }

    int source;

    cout << "Enter source node: ";
    cin >> source;

    vector<int> dist(nodes, INT_MAX);

    vector<bool> visited(nodes, false);

    dist[source] = 0;

    for(int count = 0; count < nodes - 1; count++) {

        int minDist = INT_MAX;
        int u = -1;
        for(int i = 0; i < nodes; i++) {

            if(!visited[i] && dist[i] < minDist) {

                minDist = dist[i];
                u = i;
            }
        }


        if(u == -1) {
            break;
        }

        visited[u] = true;

        for(int v = 0; v < nodes; v++) {

            if(graph[u][v] != 0 &&
               !visited[v] &&
               dist[u] != INT_MAX &&
               dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "\nShortest distances from source node "
         << source << ":" << endl;

    for(int i = 0; i < nodes; i++) {

        cout << "To node " << i
             << " = " << dist[i] << endl;
    }

    return 0;
}