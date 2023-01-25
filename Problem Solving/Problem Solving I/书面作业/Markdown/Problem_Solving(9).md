# Homework
## Problems in UD
### 10.2
**(a)**
Define $R$ on $X,(x,y)\in R$ if and only if $[\frac{x}{2}]+x=[\frac{y}{2}]+y.$
**(b)**
Define $R$ on $X,(x,y)\in R$ if and only if $\frac{x}{y}\in\Z\land\frac{x}{y}<=2.$ 
**(c)**
Define $R$ on $X,(x,y)\in R$ if and only if $|x-3|+|y-3|=3.$
**(d)**
Define $R$ on $X,(x,y)\in R$ if and only if $[\frac{x}{2}]+x>[\frac{y}{2}]+y.$
### 10.4
It is an equivalence relation.
To see whether ~ is an equivalence relation, consider if it's reflexive, symmetric and transitive respectively.
**Reflexive:** Since $x_1-x_1=0$ and $x_2-x_2=0,0$ is an even integer, namely $(x_1,x_2)$ ~ $(x_1,x_2),$ ~ is reflexive.  
**Symmetric:** If $x_1-y_1$ and $x_2-y_2$ are all even integers, then $y_1-x_1$ and $y_2-x_2$ are also even integers, namely if $(x_1,x_2)$ ~ $(y_1,y_2)$ then $(y_1,y_2)$ ~ $(x_1,x_2).$ So ~ is symmetric.
**Transitive:** If $(x_1,x_2)$ ~ $(y_1,y_2),(y_1,y_2)$ ~ $(z_1,z_2),$ then $x_1-y_1,x_2-y_2,y_1-z_1,y_2-z_2$ are all even integers. Consider $x_1-z_1=x_1-y_1+y_1-z_1,$ since $x_1-y_1,y_1-z_1$ are all even integers, the sum of two even integers is also an even integer, so $x_1-z_1$ is an even integer. In the same way, we can prove that $x_2-z_2$ is also an even integer. Thus $(x_1,x_2)$ ~ $(z_1,z_2).$ So if $(x_1,x_2)$ ~ $(y_1,y_2),(y_1,y_2)$ ~ $(z_1,z_2),$ then $(x_1,x_2)$ ~ $(z_1,z_2),$ namely ~ is transitive.
All in all, since ~ is reflexive, symmetric and transitive, then it's equivalence relation. 
### 10.5
*Proof.*
$\rightarrow:$
Now we want to prove if $E_x=E_y$ holds, then $x$ ~ $y.$
Since $E_x=E_y,$ then we can say $\forall m,m\in E_x$ if and only if $m\in E_y.$ So we can choose an $m_0\in E_x,$ namely $x$ ~ $m_0.$ Since $m_0\in E_x,$ then $m_0\in E_y,$ too. So $y$ ~ $m_0.$ Because ~ is an equivalence relation, it's both symmetric and transitive. Since ~ is symmetric and we have $y$ ~ $m_0,$ then $m_0$ ~ $y.$ And again since ~ is transitive and we have $x$ ~ $m_0,m_0$ ~ $y,$ so $x$ ~ $y.$
$\leftarrow:$
Now we have to show that if $x$ ~ $y,$ then $E_x=E_y$ holds. We might as well prove it by contradictory.
Suppose $x$ ~ $y,$ but $E_x\neq E_y.$ Without loss of generality, we might suppose there exists an $n_0\in E_x,$ and $n_0\notin E_y.$ Since ~ is an equivalence relation, it's both symmetric and transitive. Because $n_0\in E_x,$ so $x$ ~ $n_0,$ and since ~ is symmetric, then $n_0$ ~ $x.$ Again since ~ is transitive and we have $n_0$ ~ $x,x$ ~ $y,$ so we have $n_0$ ~ $y,$ and finally $y$ ~ $n_0,$which contradicts with our hypothesis that $n_0\notin E_y.$ In the same way we can put all the elements that are contained in $E_x(or E_y)$ yet not contained in $E_y(or E_x)$ into $E_y(or E_x),$ thus contradicts with our hypothsis that $E_X\neq E_y.$ So we have prove that if $x$ ~ $y,$ then $E_x=E_y.$
In conclusion, we prove that for all elements $x$ and $y$ in $X,$ the equality $E_x=E_y$ holds if and only if $x$ ~ $y.$
### 10.8
**(a)**
Yes, it is.
The equivalence class of the polynominal given by $p(x)=x$ is $\{p(x):p(x)=a_nx^n+a_{n-1}x^{n-1}+...+a_1x^1+a_0\land a_0=0\}.$
**(b)**
Yes,it is.
If $r(x)=3x+5,E_r=\{p(x):p(x)=a_nx^n+a_{n-1}x^{n-1}+...+a_1x_1+a_0\land\forall k,k\neq1, a_k=0\land a_1\neq 0\}.$
**(c)**
No, it isn't.
The relation ~ isn't symmetric.
### 11.3
**(a)**
Yes, it is.
Each partitioning set consists of the coordinates of all the dots in a very plane in $\R^3,$ and every plane corresponding to the set is parallel to each other, namely disjoint with one another, and all the planes altogether occupy the whole $\R^3.$
**(b)**
Yes it is.
Each partitioning set consists of the coordinates of all the dots on a very sphere( especially when $r=0,$ the sphere is a dot ). All the spheres corresponding to the sets share one common core $(0,0,0)$ and are disjoint with each other, and all the spheres occupy the whole $\R^3.$
### 11.7
**(a)**
Yes, it determines a partition of $P$,the partition is $\{A_m:m\in\N\}$.
To show it we have to prove **(i)** $\forall m\in\N,A_m\neq\emptyset$ **(ii)** $\forall m,n\in \N,m\neq n,A_m\cap A_n=\emptyset$ **(iii)** $\cup_{m\in N}A_m=P.$
*Proof.*
**(i)** Obviously.
**(ii)** $\forall m,n\in N,m\neq n,\forall p\in A_m,$ the degree of $p$ is $m,$ and $m\neq n,$ so obviously $\forall p\in A_m,p\notin A_n,$ thus $A_m\cap A_n=\emptyset.$
**(iii)** $\forall p\in P$
$\leftrightarrow$ the degree of $p$,denoted by $k\in\N$
$\leftrightarrow p\in A_k,k\in\N$
$\leftrightarrow p\in \cup_{m\in\N}A_m$
$\leftrightarrow \cup_{m\in\N}A_m=P$
**(b)**
Yes, it determnines a partition of $P,$ the partition is $\{A_c,\{p:p\in P\land p\notin A_c\}\}.$
*Proof.*
**(i)** $A_c=\{p(x):p(x)=a_nx^n+a_{n-1}x^{n-1}+...+a_1x^1+a_0\land a_0=c\}$ So obviously $A_c$ and $\{p:p\in P\land p\notin A_c\}$ are all nonempty sets.
**(ii)** From the definition of $\{p:p\in P\land p\notin A_c\},$ we can conclude that $A_c\cap\{p:p\in P\land p\notin A_c\}=\emptyset.$
**(iii)** From the definition of $\{p:p\in P\land p\notin A_c\},$ we can conclude that $A_c\cup\{p:p\in P\land p\notin A_c\}=P.$
**(c)**
No,it doesn't determine a partition of $P.$
Suppose $p_1=1,$ so actually $\exists A_{p_1}=P,$ because $\forall p\in P,p=p_1\times p,$ and thus contradicts with the definition of partition.The existence of $A_{p_1}$ denies the statement that the statement determines a partition of $P.$
**(d)**
No,it doesn't determine a partition of $P.$
Because a polynominal equation $p(x)=0$ could have many roots, namely there could be many $a,b,c...\in\R,a\neq b\neq c\neq...,p(a)=p(b)=p(c)=...=0.$ In such situation $A_a\cap A_c\neq\emptyset,$ thus contradicts with the definition of partition.
### 11.8
*Proof.*
**(i)** Since $\{A_\alpha:\alpha\in I\}$ and $\{A_\alpha:\alpha\in J\}$ are all partitions, so obviously $\forall\alpha\in I\cup J,A_\alpha\neq\emptyset.$
**(ii)** Since $\{A_\alpha:\alpha\in I\}$ and $\{A_\alpha:\alpha\in J\}$ are all partitions, so $\forall\alpha_1,\alpha_2\in I,\alpha_1\neq\alpha_2,A_{\alpha_1}\cap A_{\alpha_2}=\emptyset,\forall\alpha_3,\alpha_4\in J,A_{\alpha_3}\cap A_{\alpha_4}=\emptyset,$ and $\cup_{\alpha\in I}A_\alpha=\R^+,\cup_{\alpha\in J}A_\alpha=\R^-\cup\{0\},$ so $\cup_{\alpha\in I}A_\alpha\cap\cup_{\alpha\in J}A_\alpha=\emptyset,$ so $A_{\alpha_1}\cap A_{\alpha_3}=\emptyset.$ Thus, we proved $\forall\alpha_1,\alpha_2\in I\cup J,A_{\alpha_1}\cap A_{\alpha_2}=\emptyset.$
**(iii)** Since $\cup_{\alpha\in I}A_\alpha=\R^+,\cup_{\alpha\in J}A_\alpha=\R^-\cup\{0\},$ so $\cup_{\alpha\in I}A_\alpha\cup\cup_{\alpha\in J}A_\alpha=\R,$ namely $\cup_{\alpha\in I\cup J}A_\alpha=\R.$
### 11.9
**(a)**
Yes,it is.
*Proof.*
**(i)** From the problem, we can know that $\forall\alpha\in I,A_\alpha\cap B\neq\emptyset.$
**(ii)** Suppose $A_\alpha\cap B$ is denoted by $B_\alpha.$ $\forall\alpha_1,\alpha_2\in I,A_{\alpha_1}\cap A_{\alpha_2}=\emptyset,B\cap(A_{\alpha_1}\cap A_{\alpha_2})=\emptyset,$ so $B\cap A_{\alpha_1}\cap B\cap A_{\alpha_2}=\emptyset,$ namely $B_{\alpha_1}\cap B_{\alpha_2}=\emptyset.$
**(iii)** $\cup_{\alpha\in I}B_\alpha=\cup_{\alpha\in I}(A_\alpha\cap B)=B\cap(\cup_{\alpha\in I}A_\alpha)=B\cap X=B.$
**(b)**
No,it isn't.
Counterexample:$X=\{1,2,3,4,5\},A_1=\{1\},A_2=\{2\},A_3=\{3,4,5\},$ so $\{A_\alpha:\alpha\in\{1,2,3\}\}$ is a partition of $X,$ but obviously $\{X\setminus A_\alpha:\alpha\in\{1,2,3\}\}$ isn't a partition of $X$ because $(X\setminus A_1)\cap(X\setminus A_2)\neq\emptyset.$
### 12.10
**(a)**
*Proof.*
By contradictory.
Suppose $sup(S\cup T)<supS,sup(S\cup T)<supT.$
Since $sup(S\cup T)<supS,$ so there exists $s\in S,s>\sup(S\cup T).$ Since $s\in S,$ so $s\in(S\cup T),$ thus we conclude $\exists s\in(S\cup T),s>sup(S\cup T),$ which contradicts with the definition of tight upper bound of a set. So $sup(S\cup T)\geq supS.$ IN the same way we can prove $sup(S\cup T)\geq supT.$
**(b)** 
*Proof.*
$\forall x\in S\cup T,x\in S$ or $x\in T.$ If $x\in S,$  then $x\leq supS.$ If $x\in T,$ then $x\leq supT.$ So $\forall x\in S\cup T,x\leq max\{supS,supT\}.$ So $max\{supS,supT\}$ is an upper bound of $S\cup T.$ Now we show $max\{supS,supT\}$ is the tight upper bound of $S\cup T$ by contradictory:
Suppose $max\{supS,supT\}$ isn't the tight upper bound of $S\cup T,$ then we suppose $m$ is the tight upper bound of $S\cup T,$ so $m<max\{supS,supT\},\forall x\in S\cup T,x\leq m.$ Without loss of generality, we suppose $supS>supT,$ so $\forall x\in S,x\leq m<sup(S\cup T)=supS.$ According to the completeness of real numbers, there exist numbers between $m$ and $supS,$ then it must be bigger than $m,$ and since it's smaller than $supS,$ it's contained in $S,$ so it must be smaller than $m$ at the same time, thus obviously contradicts. So $sup\{S\cup T\}=max\{supS,supT\}.$
**(c)**
The tight upper bound of the union of two sets is smaller than neither of the tight upper bounds of the two sets, and in fact, the tight upper bound of the union of two sets is the bigger one of the tight bounds of the two sets.
### 12.13(b)
Reflexive:$\forall P\in\Rho(A),$ obviously $P=P,$ thus $P\subseteq P.$
Antisymmetric:$\forall P,Q\in\Rho(A),$ if $P\subseteq Q$ and $Q\subseteq P,$ then obviously $P=Q.$
Transitive:$P,Q,M\in\Rho(A),P\subseteq Q,Q\subseteq M$
$\qquad\quad\leftrightarrow \forall x\in P\rightarrow x\in Q\rightarrow x\in M$
$\qquad\quad\leftrightarrow \forall x\in P\rightarrow x\in M$
$\qquad\quad\leftrightarrow P\subseteq M$
So $(\Rho(A),\subseteq)$ is a partial order.
But $(\Rho(A),\subseteq)$ isn't a total order.Counterexample:
$A=\{1,2,3\},\Rho(A)=\{\emptyset,\{1\},\{2\},\{3\},\{1,2\},\{1,3\},\{2,3\},\{1,2,3\}\},$ then consider $P=\{1,2\}$ and $Q=\{1,3\},$ neither $P\subseteq 
Q$ nor $Q\subseteq P.$
### 12.16
**(a)**
Consider the set $K=\{1,2,5,7,8,10\}\in\Rho(\Z),$ obviously $\{1,2,5,7\},\{2,5,8\},\{2,8,10\}$ are all subsets of $K,$ so $\Beta$ is an upper bounded set and $K$ is the least upper set of $\Beta.$
**(b)**
Consider the set $\Z,$ obviously we have $\Z\in\Rho(\Z),$ and $\forall M\in\Rho(\Z),M\subseteq\Z,$ so every element of all the subsets of $\Rho(\Z)$ is subset of $\Z,$ namely $\Z$ is the upper bound of every nonempty subset of $\Rho(\Z),$ so all of them are upper bounded.
**(c)**
For every nonempty subset $\Alpha$ of $\Rho(\Z)$ we say that $U\in\Rho(\Z)$ is a lower set of $\Alpha,$ if $U\subseteq X$ for all $X\in\Alpha.$ A nonempty set $\Alpha$ will be called a lower bounded set if there is a lower set of $\Alpha$ in $\Rho(\Z).$ We say $U_0\in\Rho(\Z)$ is a greatest lower set if (i) $U_0$ is a lower set of $\Alpha$ and (ii) if $U$ is another lower set of $\Alpha,$ then $U\subseteq U_0.$
**(d)**
Least upper set of $\Alpha$ is $\cup_{M\in\Alpha}M.$
Greatest lower set of $\Alpha$ is $\cap_{N\in\Alpha}N.$
**(e)**
*Proof.*
By contradictory.
Suppose upper bounded set $\Alpha$ doesn't have a least upper set, so for every upper set $U$ of $\Alpha,$ there exists another upper set $V$ of $\Alpha,$ where $V\subseteq U.$ Obviously $\cup_{M\in\Alpha}M$ is a upper set of $\Alpha,$ and thus we have $V_0\subseteq \cup_{M\in\Alpha}M,V_0$ is also an upper set of $\Alpha.$ Thus $\exists x\in M,M\in\Alpha,x\in V_0,$ but $x\notin\cup_{M\in\Alpha}M,$ which is absurd. Thus $(\Rho(\Z),\subseteq)$ has the " least upper set property ".
### 12.20
*Proof.*
By contradiction.
Suppose $\infty\in\R,$ consider the interval $(a,+\infty),$ it's easy to see that it is bounded, so it has a supremum. Since $a\leq\infty$ for all $a\in\R,$ the supremum must be smaller than $\infty,$ too. Thus contradicts with the definition of supremum. In the same way we can have the same conclusion for $-\infty.$ So $\infty\notin\R.$ 
### 12.22
*Proof.*
Without loss of generality, we might as well suppose $a$ is a positive rational number.
For any positive rational number $a,$ we can easily see that $\sqrt[]{2}a$ is an irrational number and it's bigger than $a,$ so $b=\sqrt[]{2}a.$ In the same way we can discuss the situation where $a$ is negative. If $a$ is $0,$ then all the positive irrational numbers are bigger than $a.$
### 12.23
*Proof.*
Since $a$ and $b$ are real numbers, then by Archimedean property of $\R,$ we have $\exists m,n\in\N,n(b-a)>1,m>an,$ so $m-(b-a)n<m-1<an<m,$ so $a<\frac{m}{n}<b,$ where $\frac{m}{n}$ is a rational number. So we prove that $\exists q\in Q,a<q<b.$ Furthermore, we can have $q_1,q_2\in Q,a<q_1<q_2<b.$ Now consider that $q_1+\frac{q_2-q_1}{\sqrt[]{2}}$ is an irrational number and it's between $a$ and $b,$ so we have prove that for arbitrary real numbers $a$ and $b,$ there exists an irrational number $c=q_1+\frac{q_2-q_1}{\sqrt[]{2}},a<c<b.$
## Extra Problem
**(i) Reflexive:** 
Suppose $R_1,R_2$ are reflexive relations on $S,$ then $R_1\cup R_2$ and $R_1\cap R_2$ are still reflexive.Because $\forall x\in S,(x,x)\in R_1,(x,x)\in R_2,$ so $(x,x)\in R_1\cup R_2$ and $(x,x)\in R_1\cap R_2.$
**(ii) Symmetric:**
Suppose $R_1,R_2$ are symmetric relations on $S,$ then $R_1\cup R_2$ and $R_1\cap R_2$ are still symmetric. Because $\forall(x_1,y_1)\in R_1,(x_2,y_2)\in R_2\rightarrow(y_1,x_1)\in R_1,(y_2,x_2)\in R_2,$ then $\forall(x,y)\in R_1\cup R_2\leftrightarrow(x,y)\in R_1\lor(x,y)\in R_2\rightarrow(y,x)\in R_1\lor(y,x)\in R_2\leftrightarrow(y,x)\in R_1\cup R_2.\forall(x,y)\in R_1\cap R_2\leftrightarrow(x,y)\in R_1\land(x,y)\in R_2\rightarrow(y,x)\in R_1\land (y,x)\in R_2\leftrightarrow(y,x)\in R_1\cap R_2.$ Q.E.D
**(iii) Antisymmetric:**
Suppose $R_1,R_2$ are antisymmetric relations on $S,$ then $R_1\cup R_2$ isn't antisymmetric, but $R_1\cap R_2$ is antisymmetric.Counterexample: $S=\{1,2\},R_1=\{(1,1),(2,1),(2,2)\},R_2=\{(1,1),(1,2),(2,2)\},$ although $R_1$ and $R_2$ are antisymmetric, $R_1\cup R_2=\{(1,1),(1,2),(2,1),(2,2)\}$ isn't antisymmetric as $(1,2)\in R_1\cup R_2,(2,1)\in R_1\cup R_2,$ but $1\neq 2.$ However $R_1\cap R_2$ is antisymmetric since $\forall(x_1,y_1)\in R_1,(x_2,y_2)\in R_2\land (y_1,x_1)\in R_1,(y_2,x_2)\in R_2\rightarrow x_1=y_1,x_2=y_2\leftrightarrow\forall(x,y)\in R_1\cap R_2\land(y,x)\in R_1\cap R_2\rightarrow x=y.$ Q.E.D.
**(iv) Transitive:**
Suppose $R_1,R_2$ are transitive relations on $S,$ then $R_1\cap R_2$ is still transitive but $R_1\cup R_2$ isn't transitive. $\forall(x,y),(y,z)\in R_1\cap R_2\leftrightarrow(x,y)\in R_1\land(x,y)\in R_2,(y,z)\in R_1\land(y,z)\in R_2\rightarrow(x,z)\in R_1\land(x,z)\in R_2\leftrightarrow(x,z)\in R_1\cap R_2.$ Q.E.D. Now the counterexample:$S=\{1,2,3\},R_1=\{(1,2)\},R_2=\{(2,3)\},$ then $R_1\cup R_2=\{(1,2),(2,3)\},$ so $(1,2),(2,3)\in R_1\cup R_2,$ but $(1,3)\notin R_1\cup R_2.$