# 题目描述

有一个 $n\times m$ 的棋盘，在某个点 $(x,y)$ 上有一个象棋的马，请你计算出马到达棋盘上任意一个点最少要走几步。如果某个格点无论走几步都无法到达，输出 -1。

# 输入

一行四个数： $n,m,x,y$ 。其中 $1\leq n,m\leq 500,1\leq x\leq n,1\leq y\leq m$ 。

# 输出

$n$ 行 $m$ 列，第 $i$ 行第 $j$ 列表示马到达 $(i,j)$ 的最小步数，若无法到达输出 $-1$ 。

# 样例输入

```
3 3 1 1
```

# 样例输出

```
0 3 2    
3 -1 1    
2 1 4    
```
