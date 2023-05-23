# TallerEstructurasdeDatosAvanzadas

## 1. Autores ![Autores](https://img.shields.io/badge/autores-blueviolet)

- [@](https://github.com/)

- [@](https://www.github.com/)

- [@](https://www.github.com/)

- [@Jhonny Guarin](https://www.github.com/JhonnyGCH)

- Complete Binary Tree Inserter
1. La clase `CBTInserter` se utiliza para insertar un nuevo nodo en un árbol binario completo y mantenerlo completo después de la inserción.
2. En el constructor `CBTInserter`, se recibe el nodo raíz del árbol binario completo y se inicializa la cola `treeQueue` para realizar un recorrido de nivel del árbol.
3. Se crea una cola temporal `tempQueue` y se agrega el nodo raíz a la cola.
4. Se inicia un recorrido de nivel mientras la cola temporal no esté vacía.
5. En cada iteración del recorrido de nivel:
   - Se extrae el nodo actual de `tempQueue`.
   - Se agrega el nodo actual a `treeQueue`, que se utilizará para realizar el seguimiento de los nodos del árbol.
   - Si el nodo actual tiene un hijo izquierdo, se agrega a `tempQueue`.
   - Si el nodo actual tiene un hijo derecho, se agrega a `tempQueue`.
   - Si el nodo actual tiene tanto un hijo izquierdo como un hijo derecho, significa que ya tiene dos hijos y no puede acomodar más nodos. En este caso, se elimina el nodo actual de `treeQueue`.
6. Después de completar el recorrido de nivel, `treeQueue` contendrá todos los nodos del árbol en el orden de un recorrido de nivel.
7. En el método `insert`, se recibe un valor `val` para crear un nuevo nodo a insertar en el árbol.
8. Se crea un nuevo nodo `newNode` con el valor `val`.
9. Se obtiene el nodo padre del nuevo nodo de la parte frontal de `treeQueue`.
10. Si el nodo padre no tiene un hijo izquierdo, se establece `newNode` como el hijo izquierdo del nodo padre.
11. Si el nodo padre ya tiene un hijo izquierdo, significa que el nodo padre tiene un hijo derecho disponible. En este caso, se establece `newNode` como el hijo derecho del nodo padre y se elimina el nodo padre de `treeQueue` porque ya no puede acomodar más nodos.
12. Se agrega `newNode` a `treeQueue` para realizar un seguimiento del nuevo nodo.
13. Por último, se devuelve el valor del nodo padre. Esto cumple con el requisito de la tarea de retornar el valor del padre del nodo insertado.

![image](https://github.com/carl0s25/TallerEstructurasdeDatosAvanzadas/assets/89582094/07e180f0-9893-4f98-bab6-d03c929436ce)


------------------------------------------

- Binary Tree Inorder Traversal
1.	La función inorderTraversal recibe el nodo raíz de un árbol binario.
2.	Se crea un vector result que almacenará el recorrido inorder de los valores de los nodos.
3.	Se crea una pila nodeStack que se utilizará para realizar un seguimiento de los nodos durante el recorrido.
4.	Se inicializa un puntero current con el nodo raíz.
5.	Se inicia un bucle principal que se ejecutará mientras el nodo actual no sea nulo o la pila no esté vacía.
6.	Dentro del bucle principal, se inicia un bucle interno para recorrer todos los nodos a la izquierda del nodo actual y se van apilando en nodeStack.
7.	Se extrae el nodo superior de la pila (current) y se guarda su valor en el vector result.
8.	Se actualiza el puntero current al hijo derecho del nodo extraído.
9.	El bucle principal continúa hasta que se hayan procesado todos los nodos en el recorrido inorder.
10.	Finalmente, se devuelve el vector result que contiene los valores de los nodos en el orden correcto del recorrido inorder del árbol binario.

![image](https://github.com/carl0s25/TallerEstructurasdeDatosAvanzadas/assets/89582094/959fd8d6-0ced-408d-90e3-801566b5dc1d)
![image](https://github.com/carl0s25/TallerEstructurasdeDatosAvanzadas/assets/89582094/77421d4d-7a64-481f-9359-2b4c8a094867)

------------------------------------------

- Validate Binare Search Tree

1.	Si el nodo es nulo, se considera un BST válido y se devuelve true.
2.	Se compara el valor del nodo con los valores mínimos y máximos permitidos.
•	Si el nodo tiene un valor menor o igual que el valor mínimo o mayor o igual que el valor máximo, no cumple con la definición de un BST válido y se devuelve false.
3.	Se realiza una llamada recursiva a la función isValidBST para validar los subárboles izquierdo y derecho.
•	Para el subárbol izquierdo, se establece el nodo actual como el nuevo valor máximo permitido.
•	Para el subárbol derecho, se establece el nodo actual como el nuevo valor mínimo permitido.
4.	Si ambos subárboles son BST válidos, se devuelve true. De lo contrario, se devuelve false.

------------------------------------------

- Minimum Height Trees
1.	Si n es igual a 1, significa que solo hay un nodo en el árbol, por lo que se devuelve una lista con ese nodo como raíz.
2.	Se crea una lista de adyacencia (adjacencyList) para representar el grafo del árbol. Cada nodo tiene un conjunto de sus vecinos.
3.	Se encuentra el conjunto inicial de hojas (nodos con grado 1) y se almacenan en el vector leaves.
4.	Se realiza un proceso de eliminación de hojas hasta que solo queden 1 o 2 nodos en el árbol.
•	Se recorren todas las hojas actuales y se elimina la conexión entre la hoja y su vecino.
•	Si el vecino se convierte en una nueva hoja después de la eliminación, se agrega al vector newLeaves.
•	Se actualiza el número total de nodos n y se reemplaza el vector leaves con newLeaves.
5.	Al finalizar el proceso, se devuelve el vector leaves que contiene las etiquetas de las raíces de los árboles de altura mínima.

------------------------------------------

- Find a Corresponding Node of a Binary Tree in a Clone of That Tree
1.	Se inicializan dos pilas, stackOriginal y stackCloned, y se empujan los nodos raíz original y cloned en sus respectivas pilas.
2.	Se inicia un bucle mientras la pila stackOriginal no esté vacía.
3.	En cada iteración del bucle, se extraen los nodos superiores de ambas pilas, nodeOriginal y nodeCloned.
4.	Se comprueba si nodeOriginal es igual al nodo de destino target. Si es así, se ha encontrado el nodo buscado en el árbol original, por lo que se devuelve el nodo nodeCloned, que es una referencia al mismo nodo en el árbol clonado.
5.	Se examinan los nodos hijos de nodeOriginal. Si hay un hijo derecho, se empujan tanto el hijo derecho de nodeOriginal como el hijo derecho de nodeCloned en sus respectivas pilas. Lo mismo se hace para el hijo izquierdo, si existe.
6.	El bucle continúa hasta que se encuentre el nodo de destino o hasta que se hayan examinado todos los nodos en el árbol original.
7.	Si no se encuentra el nodo de destino después de examinar todos los nodos, se devuelve un puntero nulo.

------------------------------------------

- Find if Path Exists in Graph
1.	Se define la clase Solution que contiene la función validPath que se encargará de determinar si existe un camino válido desde el vértice de origen al vértice de destino.
2.	La función validPath recibe como parámetros el número de vértices n, las aristas representadas como una matriz 2D edges, el vértice de origen source y el vértice de destino destination.
3.	Se crea una lista de adyacencia adjList de tamaño n para representar el grafo. Cada índice de la lista de adyacencia corresponderá a un vértice y almacenará los vértices adyacentes a él.
4.	Se itera sobre cada arista en edges. Para cada arista [u, v], se agrega v a la lista de adyacencia de u y u a la lista de adyacencia de v. Esto se hace para representar la conexión bidireccional entre los vértices.
5.	Se crea un vector visited de tamaño n para marcar los vértices visitados. Inicialmente, todos los vértices se marcan como no visitados (false).
6.	Se realiza una llamada a la función dfs para iniciar la búsqueda en profundidad desde el vértice de origen hacia el vértice de destino.
7.	La función dfs es una función recursiva que realiza la búsqueda en profundidad. Recibe como parámetros el vértice actual curr, el vértice de destino destination, la lista de adyacencia adjList y el vector visited para realizar el seguimiento de los vértices visitados.
8.	Se marca el vértice actual curr como visitado estableciendo visited[curr] en true.
9.	Se comprueba si se alcanzó el vértice de destino. Si curr es igual a destination, esto significa que se encontró un camino válido y se devuelve true.
10.	Se itera sobre los vértices adyacentes a curr en la lista de adyacencia.
11.	Para cada vértice adyacente neighbor, se verifica si aún no ha sido visitado (!visited[neighbor]). Si es así, se realiza una llamada recursiva a dfs pasando neighbor como el nuevo vértice actual.
12.	Si se encuentra un camino válido en alguna de las llamadas recursivas, se devuelve true desde la función dfs.
13.	Si se exploran todos los vértices adyacentes a curr y no se encuentra un camino válido, se devuelve false desde la función dfs.
14.	Al finalizar la función validPath, se devuelve el resultado de la función dfs(source, destination, adjList, visited). Si devuelve true, significa que hay un camino válido desde el vértice de origen al vértice de destino. De lo contrario, se devuelve false.


------------------------------------------

- Relative Ranks
1.	Se define la clase Solution que contiene la función `findRelativeRanks` que se encargará de retornar un arreglo con el ranking del i-ésimo atleta, siendo:
	- Para el Primer lugar el rango "Gold Medal".
	- Para el Segundo lugar el rango "Silver Medal".
	- Para el Tercer lugar el rango "Bronze Medal".
	- Para el Cuarto hasta el último lugar el rango de su puesto como número, ejemplo "4".
2.	La función `findRelativeRanks` recibe como parámetros un vector `score` con el puntajes de cada atleta en la competición.
3.	Se crea un map sin ordenar con los valores del vector score.
4.	Se ordena el arreglo `score`.
5.	Se itera sobre el arreglo ordenados de `score` y con ayuda del map se guarda el ranking de cada atleta en el orden que fue recibido el arreglo `score` en un nuevo arreglo `respuesta`.
6.	Al finalizar la función `findRelativeRanks`, se devuelve el resultado del vector `respuesta`.

![image](https://github.com/carl0s25/TallerEstructurasdeDatosAvanzadas/assets/56564351/55184eb0-d441-423b-8183-cece8c3a6477)


------------------------------------------

- Count Distinct Integers
1.	El código en C++ cuenta la cantidad de elementos únicos en un vector de enteros utilizando un unordered_set.
	```sh
	#include <unordered_set>
	```
2.	Se define la función principal main(). El código comienza leyendo un entero n del usuario, que representa la longitud del vector a.
	```sh
	int main() {
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; ++i)
		cin >> a[i];
	```
	Luego se crea un vector a de tamaño n para almacenar los elementos. Los elementos se leen del usuario en un bucle for que itera desde 0 hasta n-1. Cada elemento se almacena en la posición correspondiente del vector a.

3.	Se crea un unordered_set llamado uniqueElements para almacenar los elementos únicos. El bucle for itera sobre los elementos del vector a y los inserta en el unordered_set. Dado que unordered_set no permite elementos duplicados, solo se almacenarán los elementos únicos.
	```sh
	    unordered_set<int> uniqueElements;
	    for (int i = 0; i < n; ++i)
		uniqueElements.insert(a[i]);

	```
4.	Se utiliza uniqueElements.size() para obtener la cantidad de elementos únicos en el unordered_set y se guarda en la variable cant. Finalmente, se imprime el valor de cant, que representa la cantidad de elementos únicos en el vector a.
	```sh
	    int cant = uniqueElements.size();
	    cout << cant << endl;
	    return 0;
	}
	```

