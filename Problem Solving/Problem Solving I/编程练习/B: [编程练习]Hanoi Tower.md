# 题目描述

Classical Hanoi Tower Problem.

You have a puzzle consisting three rods and a number of disks of various diameters, which can slide onto any rod.
The puzzle begins with the disks stacked on one rod in order of decreasing size, the smallest at the top, thus approximating a conical shape.
The objective of the puzzle is to move the entire stack to the last rod, obeying the following rules:

* Only one disk can be moved at a time.

* Each move consists of taking the upper disk from one of the stacks and palcing it on top of another stack or on an empty rod

* No disk may be placed on top of a disk that is smaller than it.

# 输入

The only line contains a single integer $N(3\leq N\leq 15)$ ——the number of initial disks stacked on the first rod.

# 输出

Print a single integer $Q$ —— the step you need to solve the puzzle.

Then the next $Q$ lines print the steps to solve the puzzle in turn.

(Format Move From $X_1$ To $X_2$ , where $1\leq X_1,X_2\leq 3$ and $X_1\neq X_2$ )

# 样例输入

```
3
```

# 样例输出

```
7
Move From 1 To 3
Move From 1 To 2
Move From 3 To 2
Move From 1 To 3
Move From 2 To 1
Move From 2 To 3
Move From 1 To 3
```

# 提示

注意，可行的方法有无数种，不一定一定要选择最短的那一个，只要保证输出正确的操作步骤即可
