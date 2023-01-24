相信大家都学过BNF范式吧(并不)

这里用BNF范式给出了较为简单的URL的规则（为了简化题目，此处URL规则并不和实际上有效的URL完全一致），请你实现一个程序，判断输入的字符串是否是合法的URL（合法的URL指符合题目给出的BNF范式的字符串）。

URL::=[Protocol "://"]<hostname>[':'port][path]['?'query]['#'fragment]
  
Protocol::=<letter>{letter}
  
hostname::=string{'.'string}
  
port::=<digit>{digit}
  
path::=<'/'{letter|digit}>{'/'{letter|digit}}
  
query::=<string['='string]>{'&'string['='string]}
  
fragment::=string
  
string::=<letter|digit>{letter|digit}
  
letter::=<'a'|'b'|'c'|'d'.....|'z'|'A'|'B'|'C'|'D'......|'X'|'Y'|'Z'>
  
digit::=<'0'|'1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'>
