# Homework
## Problems on UD
### 6.12
**Answer:** Yes,if $x,y\in S,$ then $x$#$y\in S.$
**Proof:** Because $x,y\in S,$ $x,y$ are all nonzero real numbers,so is the number $1.$ According to the closure of real numbers,the operation result of real numbers is still a real number,so $x$#$y$ is a real number,namely $x$#$y\in S.$
### 6.14
**(a)** Substitute $2$ into the equation and we get $4a+2b+c=0.$ Obviously,$a=1,b=-2,c=0$ is one set of solutions to the equation and $a,b,c$ are all integers,so $2\in A.$

**(b)** Substitute $\sqrt[]{2}$ into the equation and we get $2a+\sqrt[]{2}b+c=0.$Obviously,$a=1,b=0,c=-2$ is a set of solutions to the equation and $a,b,c$ are all integers,so $\sqrt[]{2}\in A.$

**(c)** $y=\sqrt[3]{2}.$

**(d)** Solve the equations for $A$ and $B.$ Now we can rewrite the sets $A$ and $B$ like these $A=\{x\in R:x=\frac{-b\pm\sqrt[]{b^2-4ac}}{2a},a,b,c\in Z\}$ and $B=\{x\in R:x=\frac{-q\pm\sqrt[]{q^2-4pr}}{2p},p,q,r\in Q\}.$ Since $p,q,r\in Q,$ then once again we can rewrite $B$ in the form of this $B=\{x\in R:x=\frac{-\frac{b}{d}\pm\sqrt[]{(\frac{b}{d})^2-4\frac{a}{d}\cdot\frac{c}{d}}}{2\cdot\frac{a}{d}},a,b,c,d\in Z,a,c,b,d$ are all relatively prime$\}.$ Furthermore,$B$ can finally be simplified as $B=\{x\in R:x=\frac{-b\pm\sqrt[]{b^2-4ac}}{2a},a,b,c\in Z\},$ which is equivalent to $A.$

**(e)** From **(d)** we know that $A=\{x\in R:x=\frac{-b\pm\sqrt[]{b^2-4ac}}{2a},a,b,c\in Z\},$ consider the situation where $c=0,$ so $A$ can be rewritten like $A=\{x\in R:x=-\frac{b}{a}$ or $x=0\}.$ When $a$ and $b$ are relatively prime,$-\frac{b}{a}$ can represent all rational numbers,so obviously $Q\subset A.$
### 6.15
**(a)** $A$ is the set of all the dots in two-dimensional plane except those on the $x$ axis.
**(b)** Suppose there are two elemnts in $A:$ $d_1(x_1,y_1)$ and $d_2(x_2,y_2),$ so $d_1*d_2=(x_1y_2+x_2y_1,y_1y_2),$ since $y_1\neq 0$ and $y_2\neq 0,$ then $y_1y_2\neq 0,$ so $d_1*d_2\in A.$
### 6.18
**Answer:** They aren't equal.
**Process:** It is apparently that $(\frac{\sqrt[]{2}}{2},\frac{\sqrt[]{2}}{2})\in \{(x,y)\in R^2:x^2+y^2\leq 1\},$ but the same element $(\frac{\sqrt[]{2}}{2},\frac{\sqrt[]{2}}{2})\notin \{(x,y)\in R^2:|x|+|y|\leq 1\}.$
### 17.11
**(a)**
Since $g:N\rightarrow R^+$ and $g$ has the property that $g(m+n)=g(m)g(n),$ we have $g(0)=g(0+0)=g(0)g(0),$ namely $g(0)=(g(0))^2,$ because the codomain of $g$ is a subset of $R^+,$ so $g(0)\neq 0,$ we can simplify the equation $g(0)=(g(0))^2$ and get $g(0)=1.$
**(b)**
***(The base step)*** It is obvious that $g(0)=1$ holds,namely we have $g(0)=a^0.$
***(The induction step)*** Suppose that for any $n\in N,g(n)=a^n$ holds.Consider $g(n+1)=g(n)g(1)=a^n\cdot a^1=a^{n+1}.$ So if $g(n)=a^n$ holds,then $g(n+1)=a^{n+1}$ holds.Consider we have $g(0)=a^0,$ then for any $n\in N,g(n)=a^n$ holds.
### 17.13
In *the base step*,we assume that $ac(a_1c+b_1)=0$ and conclude that $c=0,$ but in fact,$c=-\frac{b_1}{a_1}$ is also a root of $p.$ We are supposed to start our *base step* with the correct result of $ac(a_1c+b_1)=0.$
### 17.14
$P(n)=Q(1)\land Q(2)\land ...\land Q(n)$
If the second principle of mathematical induction holds,then $P(n)\rightarrow Q(n+1),$ so $P(n)\rightarrow (P(n)\land Q(n+1)),$ namely $P(n)\rightarrow P(n+1).$ According tothe first principle of mathematical induction $P(n)$ holds for any $n\in N,$ which correspond to the conclusion of the second principle of mathematical induction.So the second principle of mathematical induction is correct.
### 17.16
***(The base step)*** Consider the situation where $n=3,$ the sum of all the interior angles of a convex polygon with 3 vertices(a *triangle*) is 180($(3-2)\times180$) degrees.
***(The induction step)*** Suppose the sum of all the interior angles of a convex polygon with $n$ vertices is $(n-2)180$ degrees.Now let's consider the situation of a convex polygon with $n+1$ vertices.
![](../pics/3.png)
As the picture above shows,if we add a vertice to the polygon,the sum of all the interior angles of it would be $(n-2)180-\alpha +(\alpha +\beta)+(180-\beta),$ namely $((n+1)-2)180$ degrees.So for an integer $n,$ where $n\geq 3,$ the sum of all the interior angles of a convex polygon with $n$ vertices is $(n-2)180$ degrees.
### 17.18
**(a)** $T_n=\frac{(n+1)n}{2}$
**Proof:** ***(The base step)*** Consider the situation where $n=1,$ so $T_1=\frac{(1+1)\times 1}{2}=1.$
$\quad$ $\quad$ ***(The induction step)*** Suppose that $T_n=\frac{(n+1)n}{2},$ so $T_{n+1}=T_n+(n+1)=\frac{(n+2)(n+1)}{2},$ therefore $T_n=\frac{(n+1)n}{2}$ is proved to be true.
**(b)** To produce a *Pascal's Triangle.*
### 17.19
**(a)**
$5!=120$
${8\choose 3}=56$
${8\choose 5}=56$
${5\choose 2}=10$
${5\choose 3}=10$
${7\choose 0}=1$
${7\choose 7}=1$
**(b)**
The result of $(m+1)^2$ is the number of all the dots in the matrix,which consists of the number of the dots in the smaller matrix $(m^2)$ and the dots in the outer column $(m+1)$ and row $(m+1),$ noticing that the dot on the angle is counted twice, so the correct number is $m^2+(m+1)+(m+1)-1,$ namely $(m+1)^2=m^2+2m+1.$
**(c)**
${n+1\choose k}=\frac{(n+1)!}{k!(n+1-k)!}$
${n\choose k-1}=\frac{n!}{(k-1)!(n-k+1)!}$
${n\choose k}=\frac{n!}{k!(n-k)!}$
Noticing that $\frac{n!}{(k-1)!(n-k+1)!}+\frac{n!}{k!(n-k)!}=n!\cdot(\frac{1}{(k-1)!(n-k+1)!}+\frac{1}{k!(n-k)!})=n!\cdot(\frac{k}{k!(n-k+1)!}+\frac{n-k+1}{k!(n-k+1)!})=n!\cdot\frac{k+n-k+1}{k!(n+1-k)!}=n!\cdot\frac{n+1}{k!(n+1-k)!}=\frac{(n+1)!}{k!(n+1-k)!}={n+1\choose k}.$ Namely ${n+1\choose k}={n\choose k-1}+{n\choose k}.$
**(d)**
***(The base step)*** Consider the situation where $n=1,$ so $(a+b)^1=\displaystyle \sum^{1}_{k=0}{{1\choose k}a^kb^{1-k}}=a+b.$
***(The induction step)*** Suppose $(a+b)^n=\displaystyle \sum^{n}_{k=0}{{n\choose k}a^kb^{n-k}}.$ Then $(a+b)^{n+1}=(a+b)^n\cdot (a+b)=[\displaystyle \sum^{n}_{k=0}{{n\choose k}a^kb^{n-k}}]\cdot (a+b)=\displaystyle \sum^{n}_{k=0}{{n\choose k}a^{k+1}b^{n-k}}+\displaystyle \sum^{n}_{k=0}{{n\choose k}a^kb^{n+1-k}}=\displaystyle \sum^{n+1}_{k=0}{{n+1\choose k}a^k+b^{n+1-k}}.$ So  $(a+b)^n=\displaystyle \sum^{n}_{k=0}{{n\choose k}a^kb^{n-k}}.$
**(e)** 
***(The base step)*** Consider the situation when $n=1,$ so $\displaystyle \sum^{1}_{k=0}{{1\choose k}(-1)^k}=0.$
***(The induction step)*** Suppose $\displaystyle \sum^{n}_{k=0}{{n\choose k}(-1)^k}=0,$ and then  $\displaystyle \sum^{n+1}_{k=0}{{n+1\choose k}(-1)^k}=\displaystyle \sum^{n+1}_{k=1}[{{n\choose k-1}+{n\choose k}](-1)^k}+1=\displaystyle \sum^{n+1}_{k=1}{{n\choose k-1}(-1)^k}+\displaystyle \sum^{n+1}_{k=1}{{n\choose k}(-1)^k}+1=0-1+1=0.$ So $\displaystyle \sum^{n}_{k=0}{{n\choose k}(-1)^k}=0$ for all $n\in Z.$
## Problems on ES
### 24.4
There are only 4 positions which could satisfy that the distances of the points on them are more than $\frac{\sqrt[]{2}}{2},$ but there are 5 points,so there must be 2 points whose distance is at most $\frac{\sqrt[]{2}}{2}.$ 
### 24.6
**Given nine distinct lattice points in the space,at least one of the line segments determined by these points has a lattice point as its midpoint.**
*Proof:* Given a lattice point's coordinates,we can classify it as one of the following eight types:
(even,even,even)(even,even,odd)(even,odd,even)(odd,even,even)(odd,odd,even)(odd,even,odd)(even,odd,odd)(odd,odd,odd).
According to the Pigeonhole Principle,there must be two points that share the same type of coordinates,and the coordinates of the midpoint between such two points must be all integers.Namely the midpoint between such two points must be a lattice point.
### 24.8
```
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100], i = 0, ilength[100], dlength[100], imax = 0, dmax = 0;
    while (cin >> a[i])
        i++;
    for (int r = 0; r < i; r++)
    {
        ilength[r] = 1;
        dlength[r] = 1;
    }
    ilength[0] = 1;
    dlength[i - 1] = 1;
    for (int j = 0; j < i + 1; j++)
    {
        for (int k = 0; k < j; k++)
        {
            if ((a[k] < a[j]) && (ilength[k] + 1 > ilength[j]))
                ilength[j] = ilength[k] + 1;
        }
    }
    for (int j = i; j > -1; j--)
    {
        for (int k = i; k > j; k--)
            if ((a[k] < a[j]) && (dlength[k] + 1 > dlength[j]))
                dlength[j] = dlength[k] + 1;
    }
    for (int t = 0; t < i + 1; t++)
    {
        if (ilength[t] > imax)
            imax = ilength[t];
        if (dlength[t] > dmax)
            dmax = dlength[t];
    }
    cout << max(imax, dmax);
    return 0;
}
```
## Projects on UD
### 27.3
#### Guided Project
**1.**
The successor and the successor of the successor of $\emptyset$ are $\{\emptyset\}$ and $\{\emptyset,\{\emptyset\}\}.$
The successor and the successor of the successor of $\{\emptyset\}$ are  $\{\emptyset,\{\emptyset\}\}$ and $\{\emptyset,\{\emptyset\},\{\emptyset,\{\emptyset\}\}\}.$
The successor and the successor of the success{or of $\{a,b,c\}$ are $\{a,b,c,\{a,b,c\}\}$ and $\{a,b,c,\{a,b,c\},\{a,b,c,\{a,b,c\}\}\}.$
**2.**
*First*
$0=\emptyset$
$1=0^+$
$2=1^+$
$3=2^+$
$4=3^+$
*Second*
$0=\emptyset$
$1=\{\emptyset\}$
$2=\{\emptyset,\{\emptyset\}\}$
$3=\{\emptyset,\{\emptyset\},\{\emptyset,\{\emptyset\}\}\}$
$4=\{\emptyset,\{\emptyset\},\{\emptyset,\{\emptyset\}\},\{\emptyset,\{\emptyset\},\{\emptyset,\{\emptyset\}\}\}\}$
**3.**
From the description and the properties of successor set,we can infer that $\displaystyle\cap_{k\in I}A_k$ is a subset of an arbitrary $A_k,$ and the elements are $\emptyset$ and its successors.So it's apparently that the set $\displaystyle\cap_{k\in I}A_k$ has those properties mentioned in the problem.
**4.**
According to the description,$\omega_A$ and $\omega_B$ are sets like $\displaystyle\cap_{k\in I}A_k$ whose elements are $\emptyset$ and its successors,so obviously $\omega_A=\omega_B.$
**5.**
Because $\emptyset\in S,$ and if $x\in S,x^+\in S.$ Namely the successor of $\emptyset$ and their successors are in $S,$ so $\omega\subset S.$ Meanwhile we have $S\subset\omega,$ hence $S=\omega.$ 
**6.** 
Because $x^+=x\cup \{x\}$ and $x\in \omega,$ namely $\emptyset\subset x,$ so $x^+=x\cup \{x\}\neq \emptyset\neq 0.$
**7.**
Because $S=\{x\in \omega:\forall y\in \omega,$ if $y\in x,$ then $y\subset x$$\},$ it is obvious that $S\subset\omega.$ Noticing that apparently $\emptyset\in S.$ Because $(y\in x)\land(y\subset x),$ we could infer that $x=y^+.$ Now we can rewrite $S$ like this: $S=\{x\in\omega:\forall y\in\omega,x=y^+\}\cup\{\emptyset\}.$ Obviously,we have $S=\omega.$
**8.**
Because $x^+=x\cup\{x\},$ so $x\in x^+,$ then we have $x\subset x^+.$ Since $x^+=y^+,$ then $x\subset y^+,$ namely $x\subset (y\cup\{y\}).$ Since $x\in\omega,y\in\omega$,apparently $x\subset (y\cup\{y\})\leftrightarrow x\subset y.$ In the same way we can get $y\subset x.$ Then $(x\subset y\land y\subset  x)\rightarrow x=y.$
#### Open-Ended Project
Suppose $R=2^{\emptyset}.$
One property of $R$ is that $2^R=R.$