# 题目描述

DXY时时刻刻都游荡在南哪大学栖霞校区的路上，某时刻，DXY感到饥饿难忍，遂打开手机准备点外卖，这时DXY纠结了，外卖应该送到北门还是送到东门，带着这个疑问，DXY将栖霞校区抽象成了N*M的网格，
每个格点是道路或者是建筑或者是大门，由于DXY准备骑车到门口，所以不准备穿过教学楼等建筑，只经过道路，DXY想知道离他最近的大门有多远，听说你很擅长写程序，于是便把这个问题交给你，
希望你能告诉他答案

形式化表述

有一个N*M的网格，网格内每个方格可能是大门，道路或者建筑，DXY初始在某个道路，DXY每次移动，可以从道路向上下左右四个方向移动到相邻的道路或大门处，但不能离开网格，给定网格的分布，
求DXY到达最近的大门所需的移动次数，如果DXY无法到达大门，则输出-1。

# 输入

第一行两个数字 $N,M(1\leq N,M\leq 1000)$

以下 $N$ 行，每行 $M$ 个字符，其中第 $i$ 行的第 $j$ 个字符含义如下:

* 'P' ： 当前位置为道路

* 'D' ：当前位置为DXY所在位置

* 'B' : 当前位置为建筑

* 'G' : 当前位置为大门

# 输出

输出一行，为DXY到达最近大门所需的移动次数，如果不能到达，则输出-1

# 样例输入

```
5 5
GBPPP
PBPBP
PBPBP
PBPBP
PPPBD
```

# 样例输出

```
16
```
