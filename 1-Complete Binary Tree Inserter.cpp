{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang2058{\fonttbl{\f0\fmodern\fprq1\fcharset0 Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red197\green134\blue192;\red86\green156\blue214;\red206\green145\blue120;\red212\green212\blue212;\red78\green201\blue176;\red220\green220\blue170;\red156\green220\blue254;}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\widctlpar\sa160\sl252\slmult1\cf1\f0\fs20\par

\pard\widctlpar\sl270\slmult0 #include\cf2  \cf3 <queue>\cf4\par
\par
\cf2 class\cf4  \cf5 CBTInserter\cf4  \{\par
\cf2 private:\cf4\par
\~ \~ TreeNode* root;\par
\~ \~ \cf5 std\cf4 ::queue<TreeNode*> treeQueue;\par
\par
\cf2 public:\cf4\par
\~ \~ \cf6 CBTInserter\cf4 (\cf5 TreeNode\cf2 *\cf4  \cf7 root\cf4 ) \{\par
\~ \~ \~ \~ \cf2 this\cf4 ->\cf7 root\cf4  = root;\par
\~ \~ \~ \~ \cf5 std\cf4 ::queue<TreeNode*> tempQueue;\par
\~ \~ \~ \~ \cf7 tempQueue\cf4 .\cf6 push\cf4 (root);\par
\~ \~ \~ \~ \cf1 while\cf4  (!\cf7 tempQueue\cf4 .\cf6 empty\cf4 ()) \{\par
\~ \~ \~ \~ \~ \~ TreeNode* node = \cf7 tempQueue\cf4 .\cf6 front\cf4 ();\par
\~ \~ \~ \~ \~ \~ \cf7 tempQueue\cf4 .\cf6 pop\cf4 ();\par
\par
\~ \~ \~ \~ \~ \~ \cf7 treeQueue\cf4 .\cf6 push\cf4 (node);\par
\par
\~ \~ \~ \~ \~ \~ \cf1 if\cf4  (\cf7 node\cf4 ->\cf7 left\cf4 )\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 tempQueue\cf4 .\cf6 push\cf4 (\cf7 node\cf4 ->\cf7 left\cf4 );\par
\~ \~ \~ \~ \~ \~ \cf1 if\cf4  (\cf7 node\cf4 ->\cf7 right\cf4 )\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 tempQueue\cf4 .\cf6 push\cf4 (\cf7 node\cf4 ->\cf7 right\cf4 );\par
\par
\~ \~ \~ \~ \~ \~ \cf1 if\cf4  (\cf7 node\cf4 ->\cf7 left\cf4  && \cf7 node\cf4 ->\cf7 right\cf4 )\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 treeQueue\cf4 .\cf6 pop\cf4 ();\par
\~ \~ \~ \~ \}\par
\~ \~ \}\par
\~ \~ \cf2 int\cf4  \cf6 insert\cf4 (\cf2 int\cf4  \cf7 val\cf4 ) \{\par
\~ \~ \~ \~ TreeNode* newNode = \cf1 new\cf4  \cf6 TreeNode\cf4 (val);\par
\~ \~ \~ \~ TreeNode* parent = \cf7 treeQueue\cf4 .\cf6 front\cf4 ();\par
\par
\~ \~ \~ \~ \cf1 if\cf4  (!\cf7 parent\cf4 ->\cf7 left\cf4 )\par
\~ \~ \~ \~ \~ \~ \cf7 parent\cf4 ->\cf7 left\cf4  = newNode;\par
\~ \~ \~ \~ \cf1 else\cf4  \{\par
\~ \~ \~ \~ \~ \~ \cf7 parent\cf4 ->\cf7 right\cf4  = newNode;\par
\~ \~ \~ \~ \~ \~ \cf7 treeQueue\cf4 .\cf6 pop\cf4 ();\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ \cf7 treeQueue\cf4 .\cf6 push\cf4 (newNode);\par
\~ \~ \~ \~ \cf1 return\cf4  \cf7 parent\cf4 ->\cf7 val\cf4 ;\par
\~ \~ \}\par
\~ \~ \cf5 TreeNode\cf2 *\cf4  \cf6 get_root\cf4 () \{\par
\~ \~ \~ \~ \cf1 return\cf4  root;\par
\~ \~ \}\par
\};\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\lang10\par
}
 