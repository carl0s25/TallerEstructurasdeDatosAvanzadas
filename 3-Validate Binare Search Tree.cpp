{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang2058{\fonttbl{\f0\fmodern\fprq1\fcharset0 Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red86\green156\blue214;\red212\green212\blue212;\red78\green201\blue176;\red220\green220\blue170;\red156\green220\blue254;\red197\green134\blue192;}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\widctlpar\sl270\slmult0\cf1\f0\fs20 class\cf2  \cf3 Solution\cf2  \{\par
\cf1 public:\cf2\par
\~ \~ \cf1 bool\cf2  \cf4 isValidBST\cf2 (\cf3 TreeNode\cf1 *\cf2  \cf5 root\cf2 ) \{\par
\~ \~ \~ \~ \cf6 return\cf2  \cf4 isValidBST\cf2 (root, \cf1 nullptr\cf2 , \cf1 nullptr\cf2 );\par
\~ \~ \}\par
\~ \~ \par
\cf1 private:\cf2\par
\~ \~ \cf1 bool\cf2  \cf4 isValidBST\cf2 (\cf3 TreeNode\cf1 *\cf2  \cf5 node\cf2 , \cf3 TreeNode\cf1 *\cf2  \cf5 minNode\cf2 , \cf3 TreeNode\cf1 *\cf2  \cf5 maxNode\cf2 ) \{\par
\~ \~ \~ \~ \cf6 if\cf2  (node == \cf1 nullptr\cf2 )\par
\~ \~ \~ \~ \~ \~ \cf6 return\cf2  \cf1 true\cf2 ;\par
\~ \~ \~ \~ \par
\~ \~ \~ \~ \cf6 if\cf2  ((minNode && \cf5 node\cf2 ->\cf5 val\cf2  <= \cf5 minNode\cf2 ->\cf5 val\cf2 ) || (maxNode && \cf5 node\cf2 ->\cf5 val\cf2  >= \cf5 maxNode\cf2 ->\cf5 val\cf2 ))\par
\~ \~ \~ \~ \~ \~ \cf6 return\cf2  \cf1 false\cf2 ;\par
\~ \~ \~ \~ \par
\~ \~ \~ \~ \cf6 return\cf2  \cf4 isValidBST\cf2 (\cf5 node\cf2 ->\cf5 left\cf2 , minNode, node) && \cf4 isValidBST\cf2 (\cf5 node\cf2 ->\cf5 right\cf2 , node, maxNode);\par
\~ \~ \}\par
\};\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\lang10\par
}
 