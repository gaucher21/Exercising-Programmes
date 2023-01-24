# 题目描述

jyy为什么是神？最重要也是最容易让人信服的一点是，jyy的威名世界上无人不知无人不晓，不信？随便翻开你手边的一本英文书籍，或者在互联网上找一段英文资料（每日一遍，防止早恋），
jyy的名讳一定会反复出现其中，例如上述文章中的一句话" To detect code plagiarism in a set of programs, a driver program takes a set of program binary paths as arguments, 
invokes ob**j**dump to extract instruction sequences, strips out s**y**stem and common libraries, and finall**y** manages a queue of parallel bincmp comparisons.”，
加粗文本就构成了jyy的名讳!

现在给你一个长度为 $N$ 的只包含'j'和'y'的字符串 $S$ （字符串下标从0开始），需要你找出这个字符串中，有多少个数组是jyyish的

数组 $a$ 是jyyish的，当且仅当它满足以下条件

* $a$ 的长度为3

* $0\leq a_1 < a_2 < a_3 < n$

* $S_{a_1}$ ='j', $S_{a_2}$ ='y', $S_{a_3}$='y' 

两个数组a,b被认为是不同的，当且仅当存在 $k(1\leq k\leq 3)$ 满足 $A_k\neq B_k$

# 输入

两行，第一行为字符串长度 $N(1000\leq N\leq 50000)$
第二行为字符串 $S$

# 输出

一个数字，表示这个字符串里包含的jyyish的不同数组个数，由于可能的数字太大，请将结果模998244353后输出

# 样例输入

```
1000
yjjyjjjjjyjjyyjjyjyjjjjyyyjjjjjyjyjjyjjjyyyyyjjjyyjjyjyyjjjjjyjyyyyyjjjjyjjyjyyyjyyjjyjyyyyjyyyjyyyyjyyjjjyyyjyyyjjjyyyjjyjjyjjyjyj
jjyjjjyyyjyjjjyjjyyyjyyyyjjyjyyjjjyyyyjjjyjjjjjjjjyjyjyyyjyjjjyyyyyyjyyyjjyyjyjjjjjjyyyjyyyyjjjyyjjyyjyjyjjyjjyjjyjyjjyjyyjjjyyjjyj
yjjjjjjyjyyyjjyjjjyjjjjjyyjjjjyjjyyjjyjjjyyjjjjjyyjyjyyyyjyjyyyjyyyyjyjyjjjjjyyyyyyjyjjyyyyjyyyyjyjyyjjjjjjjjjjyjjjyyjjjyyyjyjyjjyj
jjyyyyjjjjyjjjjyjjjyjyyyyyjyyjyyjyjjjyjjyjjyyjyjjyjyyyyjjjyjyjyyjyjyyjyyyjyyjjjyjjyjyyjjyjyyjyyjjjyjjjyyjyjjjyyjjjyjjyyjyyjjyjyjyyy
yyyjyjjyjyyyyjyyyjjjjyyjjjyjyyjyyjyjyyyjjjjjjjyyyyyjyyjyjjyyyjjyyyjjjjjyjyjjyyyjyyjjyyjyjyyjjjjjyjjjjyyjyyjyjjyyyjyjyyyjyjyyjyjjjjy
yjyjyyjjyyyjjjjjyyjyjjyjjyyyyyjyyjjyyjyyjjjjjjyjjjyjyyyyjyjjjjjjjyjjyjjyjyyyyyyjyjjjyjjjjjyyyyjyjyyyyyjjyjyjjyjjyjjyyyyjjjjyyjjjjyy
yyjyjyyyyyjjjyjjyyyjjjyjjjjjjjyyyyyyjjjyyyjyjyyjjjyjjjyyyjjjyyjyyyyyjyyjjyyyjjyyjjyjyjjyjjjjyyjjyyjyyjjyjyjjjyyjyyjjjjjjjjjjjjyjyyj
jyjyjjjyjyjyyyyyyyyyjjyjjjjjyyyyjjyjyjyyyjjjyjjjyyjyyjyyjyjyyyyyjjyyjyjjyyjyyjjjyyy
```

# 样例输出

```
20907843
```

# 提示

构造DFA!
