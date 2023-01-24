# 题目描述

相信大家都学过BNF范式吧(并不)

这里用BNF范式给出了较为简单的URL的规则（为了简化题目，此处URL规则并不和实际上有效的URL完全一致），请你实现一个程序，
判断输入的字符串是否是合法的URL（合法的URL指符合题目给出的BNF范式的字符串）。

* URL::=[Protocol "://"]<hostname>[':'port][path]['?'query]['#'fragment]
  
* Protocol::=<letter>{letter}
  
* hostname::=string{'.'string}
  
* port::=<digit>{digit}
  
* path::=<'/'{letter|digit}>{'/'{letter|digit}}
  
* query::=<string['='string]>{'&'string['='string]}
  
* fragment::=string

* string::=<letter|digit>{letter|digit}
  
* letter::=<'a'|'b'|'c'|'d'.....|'z'|'A'|'B'|'C'|'D'......|'X'|'Y'|'Z'>
  
* digit::=<'0'|'1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'>

# 输入

每组测试数据包含多组测试样例
  
第一行输入测试样例的组数 $T(1\leq T\leq 500)$

每组测试样例包含两行
  
第一行为该组测试样例字符串的长度 $l(20\leq l\leq 100)$

第二行为该组测试样例给出的字符串 $S$ 。

# 输出

对于每一组测试样例，判断其给出的字符串 $S$ 是否是合法的URL，如果是，则输出一行"Yes"，否则输出一行"No"。

# 样例输入

```
2
41
https://www.baidu.com:443/s/////?wd=dxy#3
27
49.235.79.19:8081://contest
```

# 样例输出

```
Yes
No
```

# 提示

利用DFA的思想去解题
