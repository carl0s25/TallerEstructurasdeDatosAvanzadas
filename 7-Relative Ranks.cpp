struct Nodo{
    int dato;
    int index;
    Nodo *der;
    Nodo *izq;
    Nodo(int x, int i) : dato(x), index(i), izq(NULL), der(NULL){}
};

class Solution {
    public:  
    vector<string> findRelativeRanks(vector<int>& score)  {
        vector<string> res(score.size());

        int n = score.size();
        Nodo* root = new Nodo(score[0], 0);
        unordered_map<int, Nodo*> node_map = {{score[0], root}};
        for (int i = 1; i < n; i++) {
            Nodo* node = new Nodo(score[i], i);
            node_map[score[i]] = node;
            insert(root, node);
        }
        int rank = 1;
        traverse(root, res, rank);
        return res;
    }

private:
    void insert(Nodo* root, Nodo* node) {
        if (node->dato > root->dato) {
            if (root->der) {
                insert(root->der, node);
            } else {
                root->der = node;
            }
        } else {
            if (root->izq) {
                insert(root->izq, node);
            } else {
                root->izq = node;
            }
        }
    }
    void traverse(Nodo* root, vector<string>& res, int& rank) {
        if (!root) {
            return;
        }
        traverse(root->der, res, rank); // Recorre el subárbol derecho primero (mayores puntajes)
        if (rank == 1) {
            res[root->index] = "Gold Medal";
        } else if (rank == 2) {
            res[root->index] = "Silver Medal";
        } else if (rank == 3) {
            res[root->index] = "Bronze Medal";
        } else {
            res[root->index] = to_string(rank);
        }
        rank++;// Incrementa el rango para el próximo atleta
        traverse(root->izq, res, rank);// Recorre el subárbol izquierdo (menores puntajes)
    }
};