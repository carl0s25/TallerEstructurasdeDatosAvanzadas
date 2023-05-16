{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang2058{\fonttbl{\f0\fmodern\fprq1\fcharset0 Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red197\green134\blue192;\red86\green156\blue214;\red206\green145\blue120;\red212\green212\blue212;\red78\green201\blue176;\red220\green220\blue170;\red156\green220\blue254;\red181\green206\blue168;\red106\green153\blue85;}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\widctlpar\sl270\slmult0\cf1\f0\fs20 #include\cf2  \cf3 <vector>\cf4\par
\cf1 #include\cf2  \cf3 <queue>\cf4\par
\cf1 #include\cf2  \cf3 <unordered_set>\cf4\par
\cf2 class\cf4  \cf5 Solution\cf4  \{\par
\cf2 public:\cf4\par
\~ \~ \cf5 vector\cf4 <\cf2 int\cf4 > \cf6 findMinHeightTrees\cf4 (\cf2 int\cf4  \cf7 n\cf4 , \cf5 vector\cf4 <\cf5 vector\cf4 <\cf2 int\cf4 >>\cf2 &\cf4  \cf7 edges\cf4 ) \{\par
\~ \~ \~ \~ \cf1 if\cf4  (n == \cf8 1\cf4 ) \{\par
\~ \~ \~ \~ \~ \~ \cf1 return\cf4  \{\cf8 0\cf4\};\par
\~ \~ \~ \~ \} \~ \~ \par
\cf9\~ \~ \~ \~ // Crear un grafo representado por una lista de adyacencia\cf4\par
\~ \~ \~ \~ vector<unordered_set<\cf2 int\cf4 >> \cf6 adjacencyList\cf4 (n);\par
\~ \~ \~ \~ \cf1 for\cf4  (\cf2 const\cf4  \cf2 auto\cf4 & edge : edges) \{\par
\~ \~ \~ \~ \~ \~ \cf7 adjacencyList\cf4 [\cf7 edge\cf4 [\cf8 0\cf4 ]].\cf6 insert\cf4 (\cf7 edge\cf4 [\cf8 1\cf4 ]);\par
\~ \~ \~ \~ \~ \~ \cf7 adjacencyList\cf4 [\cf7 edge\cf4 [\cf8 1\cf4 ]].\cf6 insert\cf4 (\cf7 edge\cf4 [\cf8 0\cf4 ]);\par
\~ \~ \~ \~ \}\par
\cf9\~ \~ \~ \~ // Encontrar las hojas iniciales (nodos con grado 1)\cf4\par
\~ \~ \~ \~ vector<\cf2 int\cf4 > leaves;\par
\~ \~ \~ \~ \cf1 for\cf4  (\cf2 int\cf4  i = \cf8 0\cf4 ; i < n; ++i) \{\par
\~ \~ \~ \~ \~ \~ \cf1 if\cf4  (\cf7 adjacencyList\cf4 [i].\cf6 size\cf4 () == \cf8 1\cf4 ) \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 leaves\cf4 .\cf6 push_back\cf4 (i);\par
\~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \}\~ \~ \~ \par
\cf9\~ \~ \~ \~ // Realizar el proceso de eliminaci\'f3n de hojas hasta quedar con las MHTs\cf4\par
\~ \~ \~ \~ \cf1 while\cf4  (n > \cf8 2\cf4 ) \{\par
\~ \~ \~ \~ \~ \~ \cf2 int\cf4  leavesSize = \cf7 leaves\cf4 .\cf6 size\cf4 ();\par
\~ \~ \~ \~ \~ \~ n -= leavesSize;\par
\~ \~ \~ \~ \~ \~ vector<\cf2 int\cf4 > newLeaves;\~ \par
\~ \~ \~ \~ \~ \~ \cf1 for\cf4  (\cf2 int\cf4  i = \cf8 0\cf4 ; i < leavesSize; ++i) \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf2 int\cf4  leaf = \cf7 leaves\cf4 [i];\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf2 int\cf4  neighbor = *\cf7 adjacencyList\cf4 [leaf].\cf6 begin\cf4 ();\par
\~ \~ \~ \~\cf9 // Eliminar la conexi\'f3n entre la hoja y su vecino\cf4\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 adjacencyList\cf4 [neighbor].\cf6 erase\cf4 (leaf);\par
\cf9\~ \~ \~  // Si el vecino se convierte en una nueva hoja, se agrega a la lista\cf4\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf1 if\cf4  (\cf7 adjacencyList\cf4 [neighbor].\cf6 size\cf4 () == \cf8 1\cf4 ) \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \cf7 newLeaves\cf4 .\cf6 push_back\cf4 (neighbor);\par
\~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ leaves = newLeaves;\par
\~ \~ \~ \~ \} \~ \~ \~ \par
\~ \~ \~ \~ \cf1 return\cf4  leaves;\par
\~ \~ \}\par
\};\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\lang10\par
}
 