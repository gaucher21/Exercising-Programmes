# 题目描述

请你编写一个简单的计算器，完成指定表达式的计算。为了处理方便，我们会在表达式的操作数和操作符之间加上空格。

# 输入

输入共一行，形如

```
A ch B
```

其中 $A$ 和 $B$ 是整数， $ch$ 是"+" 或 "-" 或 "*"。

保证 $A，B，A\quad ch\quad B$ 均在C语言int表示范围。

# 输出

$A\quad ch\quad B$ 的结果。

# 样例输入

```
1 + 2
```

# 样例输出

```
3
```

# 提示

* 你的程序需要读入两个整数和一个符号，你应该上网搜索 C/C++ 支持的变量类型，以及应该如何获取输入。

* 如果你使用 C 风格的 scanf 读入，可能会遇到意想不到的问题 (你读取到的可能是空格而不是符号)，你可以尝试用 getchar() 或者仔细书写 scanf 的 pattern，但我
们更推荐你使用 C++ 风格的 cin 来解决该问题。

* 对于该问题，我们需要根据输入的符号 $ch$ 做出不同的后续操作，你应该上网搜索 C++ if/switch 语句的用法。

* 有关C语言的运算符，你可以参考C运算符
