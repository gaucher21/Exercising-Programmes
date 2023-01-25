# Homework
## Problem 1
$G=(V,T,S,P),V=\{S_0,S_1,S_2,S_3,S_4,S_5,a,b\},T=\{a,b\},S=\{S_0\},P=\{S_0\rightarrow bS_1,S_1\rightarrow bS_2,S_2\rightarrow a,S_2\rightarrow aS_3,S_3\rightarrow aS_3,S_3\rightarrow a,S_2\rightarrow bS_4,S_4\rightarrow aS_5,S_5\rightarrow bS_4,S_4\rightarrow bS_2\}.$

**derivation trees:**
**(i)** bbbbaa
![bbbbaa](../pics/6.jpg)

**(ii)** bbbababba
![bbbababba](../pics/7.jpg)

## Problem 2
< arithmetic expression >::=
< quantity >|< arithmetic expression >< binary operator >< arithmetic expression >|< sign >< arithmetic expression >|< left parenthesis >< arithmetic expression >< right parenthesis >
< quantity >::=
< variable >|< constant >
 < binary operator >::=
 +|-|*|/
 < sign >::=
 +|-
 < left parenthesis >::=
 (
 < right parenthesis >::=
 )
 < constant >::=
 1|2|3|4|5|6|7|8|9{0|1|2|3|4|5|6|7|8|9|.}
 < variable >::=
 A|B|C|D|E|F|G|H|I|J|K|L|M|N|O|P|Q|R|S|T|U|V|W|X|Y|Z|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|_ {0|1|2|3|4|5|6|7|8|9|A|B|C|D|E|F|G|H|I|J|K|L|M|N|O|P|Q|R|S|T|U|V|W|X|Y|Z|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|_ }
## Problem 3

    #include<iostream>
    using namespace std;
    int main()
    {
	    int N;
	    cin>>N;
	    int list[N]={0};
	    for(int i=0;i<N;i++)
	    cin>>list[i];
	    for(int j=0;j<N;j++)
	    {
		    if(list[j]!=0)
		    cout<<list[j]<<" ";
	    }
	    return 0;
    }