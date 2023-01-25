# 题目描述

Write a program implementing the maximal polygonal distance algorithm

# 输入

第一行为 $n$ ，代表凸包顶点数 $(1\leq n\leq 10^5)$

以下 $n$ 行，每一行两个数 $x_i,y_i$ ，代表第i个点的坐标 $(|x_i|,|y_i|\leq 10^9)$

保证顶点按照逆时针顺序给出

# 输出

输出一个数字，代表凸包直径的平方，注意用 int 会溢出，用 long long 存储答案。

# 样例输入

```
4
0 0
0 1
-1 1
-1 0
```

# 样例输出

```
2
```
