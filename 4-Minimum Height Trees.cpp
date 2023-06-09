#include <vector>
#include <queue>
#include <unordered_set>
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
            return {0};
        }     
        // Crear un grafo representado por una lista de adyacencia
        vector<unordered_set<int>> adjacencyList(n);
        for (const auto& edge : edges) {
            adjacencyList[edge[0]].insert(edge[1]);
            adjacencyList[edge[1]].insert(edge[0]);
        }
        // Encontrar las hojas iniciales (nodos con grado 1)
        vector<int> leaves;
        for (int i = 0; i < n; ++i) {
            if (adjacencyList[i].size() == 1) {
                leaves.push_back(i);
            }
        }      
        // Realizar el proceso de eliminación de hojas hasta quedar con las MHTs
        while (n > 2) {
            int leavesSize = leaves.size();
            n -= leavesSize;
            vector<int> newLeaves;  
            for (int i = 0; i < leavesSize; ++i) {
                int leaf = leaves[i];
                int neighbor = *adjacencyList[leaf].begin();
       // Eliminar la conexión entre la hoja y su vecino
                adjacencyList[neighbor].erase(leaf);
       // Si el vecino se convierte en una nueva hoja, se agrega a la lista
                if (adjacencyList[neighbor].size() == 1) {
                    newLeaves.push_back(neighbor);
                }
            }
            leaves = newLeaves;
        }       
        return leaves;
    }
};
