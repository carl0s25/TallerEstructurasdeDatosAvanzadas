{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang2058{\fonttbl{\f0\fmodern\fprq1\fcharset0 Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red197\green134\blue192;\red86\green156\blue214;\red206\green145\blue120;\red212\green212\blue212;\red78\green201\blue176;\red220\green220\blue170;\red156\green220\blue254;}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\widctlpar\sl270\slmult0\cf1\f0\fs20 #include\cf2  \cf3 <vector>\cf4\par
\cf1 #include\cf2  \cf3 <stack>\cf4\par
\cf2 class\cf4  \cf5 Solution\cf4  \{\par
\cf2 public:\cf4\par
\~ \~ \cf5 vector\cf4 <\cf2 int\cf4 > \cf6 inorderTraversal\cf4 (\cf5 TreeNode\cf2 *\cf4  \cf7 root\cf4 ) \{\par
\~ \~ \~ \~ vector<\cf2 int\cf4 > result;\par
\~ \~ \~ \~ stack<TreeNode*> nodeStack;\par
\~ \~ \~ \~ TreeNode* current = root;\par
\~ \~ \~ \~ \par
\~ \~ \~ \~ \cf1 while\cf4  (current != \cf2 nullptr\cf4  || !\cf7 nodeStack\cf4 .\cf6 empty\cf4 ()) \{\par
\~ \~ \~ \~ \~ \~ \cf1 while\cf4  (current != \cf2 nullptr\cf4 ) \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \cf7 nodeStack\cf4 .\cf6 push\cf4 (current);\par
\~ \~ \~ \~ \~ \~ \~ \~ current = \cf7 current\cf4 ->\cf7 left\cf4 ;\par
\~ \~ \~ \~ \~ \~ \} \~ \par
\~ \~ \~ \~ \~ \~ current = \cf7 nodeStack\cf4 .\cf6 top\cf4 ();\par
\~ \~ \~ \~ \~ \~ \cf7 nodeStack\cf4 .\cf6 pop\cf4 ();\par
\~ \~ \~ \~ \~ \~ \cf7 result\cf4 .\cf6 push_back\cf4 (\cf7 current\cf4 ->\cf7 val\cf4 );\~ \~ \par
\~ \~ \~ \~ \~ \~ current = \cf7 current\cf4 ->\cf7 right\cf4 ;\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ \cf1 return\cf4  result;\par
\~ \~ \}\par
\};\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\lang10\par
}
 