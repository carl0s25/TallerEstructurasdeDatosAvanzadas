class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // Crear la lista de adyacencia
        vector<vector<int>> adjList(n);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        
        // Vector para marcar los vértices visitados
        vector<bool> visited(n, false);
        
        // Llamada a la función de búsqueda DFS
        return dfs(source, destination, adjList, visited);
    }
    
private:
    bool dfs(int curr, int destination, const vector<vector<int>>& adjList, vector<bool>& visited) {
        // Marcar el vértice actual como visitado
        visited[curr] = true;
        
        // Comprobar si se alcanzó el destino
        if (curr == destination) {
            return true;
        }
        
        // Explorar los vértices adyacentes no visitados
        for (int neighbor : adjList[curr]) {
            if (!visited[neighbor]) {
                if (dfs(neighbor, destination, adjList, visited)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
