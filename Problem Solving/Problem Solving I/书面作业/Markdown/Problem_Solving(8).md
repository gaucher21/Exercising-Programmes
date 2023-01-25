# Homework
## Problems on UD
### 6.7
**(1)** $B\setminus (A\cap B)$
**(2)** $(A\cup B)\setminus (A\cap B)$
**(3)** $A\cap B\cap C$
**(4)** $(B\cap C)\setminus (A\cap B\cap C)$
**(5)** $((A\cap B)\cup (B\cap C)\cup (A\cap C))\setminus (A\cap B\cap C)$
### 6.16
**(a)** Consider $\forall n\in A,n=x^2,$ where $x\in Z.$ Because $x$ is an integer, then $x\times x$ is also a integer, namely $x^2$ is also an integer. Since $n=x^2,$ then $n$ is a integer, namely $n\in Z.$ Now we have shown that all the elements in $A$ are contained in $B,$ namely $A\subseteq B.$
**(b)** Consider $\forall n\in A,$ namely $\forall n\in R.$ $\forall n\in A,$ suppose $x=\frac{n}{2},$ since $n\in R,$ then $\frac{n}{2}\in R,$ namely $x\in R,$ so $2x\in B.$ Since $n=2x,$ so $n\in B.$ Now we have proved $\forall n\in A,n\in B,$ namely $A\subseteq B.$
**(c)** Consider $\forall (x,y)\in A,$ namely where $y=\frac{5-3x}{2}.$ Since $y=\frac{5-3x}{2},$ we can transform the equation into $2y+3x=5.$ So we have $\forall (x,y)\in A,2y+3x=5,$ namely $(x,y)\in B.$ So we have proved $\forall (x,y)\in A,(x,y)\in B.$ Namely $A\subseteq B.$
### 6.17
**(a)** $A\subsetneq B$
*Proof.*
$\forall (x,y)\in A,$ namely $xy>0.$ Because $x^2+y^2\geq xy,$ so $x^2+y^2>0.$ So $\forall (x,y)\in A,x^2+y^2>0,$ namely $(x,y)\in B.$ Now we have proved $\forall (x,y)\in A, (x,y)\in B.$ Meanwhile, consider $(1,-1)\in B,$ but it isn't contained in $A,$ so $A\subsetneq B.$
**(b)** $A\subsetneq B$
*Proof.*
First, we have to show that if an element is contained in $A$, then it's contained in $B.$ Consider $A$ is $\emptyset,$ then no element is contained in $A,$ so the statement we have to show is a tautology. So $A\subset B.$ Since every element contained in $B$ can't be contained in A, then furthermore we have proved $A\subsetneq B.$
### 7.1
Suppose $U$ is the universe.
**(a)**
*Proof.*
 $\quad x\in (A^c)^c$
 $\leftrightarrow x\in U\setminus A^c$
 $\leftrightarrow x\in U\setminus(U\setminus A)$
 $\leftrightarrow x\in A.$
**(b)**
*Proof.*
$\quad x\in (A\cap(B\cup C))$
$\leftrightarrow x\in A\land (x\in B\lor x\in C)$
$\leftrightarrow (x\in A\land x\in B)\lor(x\in A\land x\in C)$
$\leftrightarrow x\in (A\cap B)\lor x\in (A\cap C)$
$\leftrightarrow x\in (A\cap B)\cup(A\cap C)$
**(c)**
*Proof.*
$\quad x\in X\setminus(A\cap B)$
$\leftrightarrow x\in X\land x\notin (A\cap B)$
$\leftrightarrow (x\in X\land x\in A\land x\notin B)\lor(x\in X\land x\in B\land x\notin A)\lor(x\in X\land x\notin A\land x\notin B)$
$\leftrightarrow (x\in X\land x\notin A)\lor (x\in X\land x\notin B)$
$\leftrightarrow x\in(X\setminus A)\lor x\in (X\setminus B)$
$\leftrightarrow x\in ((X\setminus A)\cup (X\setminus B))$
**(d)**
*Proof.*
$\quad A\subseteq B$
$\leftrightarrow \forall x\in A\rightarrow x\in B$
$\leftrightarrow \forall x\notin B\rightarrow x\notin A$
$\leftrightarrow \forall x\in X\land x\notin B\rightarrow x\in X\land x\notin A$
$\leftrightarrow \forall x\in(X\setminus B)\rightarrow x\in(X\setminus A)$
$\leftrightarrow (X\setminus B)\subseteq (X\setminus A)$
**(e)**
*Proof.*
$\quad A\cap B=B$
$\leftrightarrow (\forall x\in A\land x\in B\rightarrow x\in B)\land (\forall x\in B\rightarrow x\in A\land x\in B)$
$\leftrightarrow \forall x\in B\rightarrow x\in A$
$\leftrightarrow B\subseteq A$
### 7.8
**(a)**
(ii) 
**(b)**
(i)(iii)(iv)(v)
**(c)**
*Proof.*
$\quad x\in (A\cap B)\setminus C$
$\leftrightarrow x\in (A\cap B)\land x\notin C$
$\leftrightarrow x\in A\land x\in B\land x\notin C$
$\leftrightarrow(x\in A\land x\notin C)\land(x\in B\land x\notin C)$
$\leftrightarrow x\in(A\setminus C)\land(x\in B\setminus C)$
$\leftrightarrow x\in ((A\setminus C)\cap(B\setminus C))$
### 7.9
**(a)** 
*Proof.*
$\quad x\in (A\setminus B)$
$\leftrightarrow x\in A\land x\notin B$
So $\forall x\in (A\setminus B)\rightarrow x\notin B$
Namely $A\setminus B$ and $B$ are disjoint.
**(b)**
*Proof.*
$\quad x\in (A\cup B)$
$\leftrightarrow x\in A\lor x\in B$
$\leftrightarrow (x\in A\land x\notin B)\lor(x\in A\land x\in B)\lor x\in B$
$\leftrightarrow (x\in A\land x\notin B)\lor x\in B$
$\leftrightarrow x\in(A\setminus B)\lor x\in B$
$\leftrightarrow x\in((A\setminus B)\cup B)$
### 7.10
*Disproof.*
By counterexample:
Suppose $A=\{1,2,3\},B=\{1\},C=\{1,2\}$
Such $A,B$ and $C$ satisfy $A\cup B=A\cup C,$ but obviously $B\neq C$
### 7.11
Counterexample:
Suppose $A=\{1,2,3,4\},B=\{1,2,3\},Y=\{1\}$
Such $A,B$ and $Y$ satisfy $A\cap Y=B\cap Y,$ but obviously $A\neq B$
### 8.1
**(a)**
$\cup^{\infty}_{n=1}A_n=[0,1)$
$\cup^{\infty}_{n=1}B_n=[0,1]$
$\cup^{\infty}_{n=1}C_n=(0,1)$
**(b)**
$\cap^{\infty}_{n=1}A_n=\{0\}$
$\cap^{\infty}_{n=1}B_n=\{0\}$
$\cap^{\infty}_{n=1}C_n=\emptyset$
**(c)**
No, because $0\in N,$ but $n$ can't be $0$.
### 8.4
*Proof.*
If there are sets in $\{A_n:n\in\Z^+\}$ such that the sets disjoint, then $\cap^{\infty}_{n=1}A_n=\emptyset.$ Then obviously $\cap^{\infty}_{n=1}A_n\subset \cap^{\infty}_{n=1}B_n.$
If all the sets in $\{A_n:n\in\Z^+\}$ intersect with each other, we use contradictory. Suppose $A_n\subset B_n$ for all $n\in\Z^+$ and  $\cap^{\infty}_{n=1}A_n\not\subset \cap^{\infty}_{n=1}B_n,$ so there is an element in $\cap^{\infty}_{n=1}A_n$ that isn't in $\cap^{\infty}_{n=1}B_n$. Since it's in $\cap^{\infty}_{n=1}A_n$, then it must be an element of all $A_k,$ where $k\in\Z^+,$ because $A_n\subset B_n$ for all $n\in\Z^+,$ so the element must be in all $B_j,$ where $j\in\Z^+,$ furthermore, it must be in $\cap^{\infty}_{n=1}B_n.$ But we suppose it shouldn't be, so it contradicts. Then we have proved $\cap^{\infty}_{n=1}A_n\subset \cap^{\infty}_{n=1}B_n.$
### 8.7
**(a)**
By contradictory.
According to the definition, the element in $\cap_{\alpha\in I}A_\alpha$ must be in every $A_\alpha$ where $\alpha\in I.$ Suppose $\cap_{\alpha\in I}A_\alpha\neq\emptyset,$ namely there are elements in $\cap_{\alpha\in I}A_\alpha,$ and they have to be in all the $A_\alpha$ where $\alpha\in I,$ but for $\alpha\in I,A_\alpha=\emptyset,$ namely there are no elements in them.Contradicts. So we have proved if $A_\alpha=\emptyset$ for some $\alpha\in I,$ then $\cap_{\alpha\in I}A_\alpha=\emptyset.$ 
**(b)**
Suppose $A_k=X,k\in I,$ then according to the definition, $\cup_{\alpha\in I}A_\alpha=\cup_{\alpha\in I\setminus \{k\}}A_\alpha\cup A_k,$ namely $\cup_{\alpha\in I\setminus \{k\}}A_\alpha\cup X=X.$
**(c)**
If $B\subseteq A_\alpha$ for every $\alpha\in I,$ then $B\cap A_\alpha=B$ for every $\alpha\in I.$ So $\cap_{\alpha\in I}(B\cap A_\alpha)=B,$ namely $B\cap (\cap_{\alpha\in I}A_\alpha)=B.$ So $B\subseteq\cap_{\alpha\in I}A_\alpha.$
### 8.8
$A=\Z$
*Proof.*
$\quad \cap_{n\in \Z^+}(R\setminus\{-n,-n+1,...,0,...,n-1,n\})$
$\leftrightarrow\cap_{n\in\Z^+}(R\cap\{-n,-n+1,...,0,...n-1,n\}^c)$
$\leftrightarrow R\cap \Z^c$
$\leftrightarrow R\setminus \Z$
So $A=R\setminus \cap_{n\in Z^+}(R\setminus\{-n,-n+1,...,0,...,n-1,n\})$
$\quad\quad =R\setminus(R\setminus\Z)$
$\qquad =\Z$
### 8.9
$A=\{x:x=2n,n\in\Z\}$
*Proof.*
$\quad Q\setminus\cap_{n\in\Z}(\R\setminus \{2n\})$
$\leftrightarrow Q\setminus\cap_{n\in\Z}(\R\cap\{2n\}^c)$
$\leftrightarrow Q\cap(\cap_{n\in\Z}(\R\cap\{2n\}^c))^c$
$\leftrightarrow Q\cap\cup_{n\in\Z}(\R\cap\{2n\}^c)^c$
$\leftrightarrow Q\cap\cup_{n\in\Z}(\R^c\cup\{2n\})$
$\leftrightarrow Q\cap\cup_{n\in\\Z}\{2n\}$
$\leftrightarrow \{x:x=2n,n\in\Z\}$
### 8.11
**(a)**
$A_1=\{1\},A_2=\{2\},A_3=\{3\}...,A_n=\{n\}.$
**(b)**
If $A_\alpha\neq A_\beta,$ then $A_\alpha\cap A_\beta=\emptyset.$
**(c)**
If $A_\alpha=A_\beta,$ then $A_\alpha\cap A_\beta\neq\emptyset.$
**(d)**
Yes.
**(e)**
Yes.
**(f)**
Yes.
**(g)**
No.
### 9.2
**(a)**
$\quad x\in (\Rho(A)\cup\Rho(B))$
$\leftrightarrow x\in\Rho(A)\lor x\in\Rho(B).$
If $x\in\Rho(A),$ so $x\subseteq A,$ then $x\subseteq (A\cup B),$ namely $x\in\Rho(A\cup B).$
In the same way, we can prove if $x\in\Rho(B),$ then $x\in\Rho(A\cup B).$
So $x\in(\Rho(A)\cup\Rho(B))\rightarrow x\in\Rho(A\cup B).$
Namely $\Rho(A)\cup\Rho(B)\subseteq \Rho(A\cup B).$
**(b)**
$A=\{1\},B=\{2\},\Rho(A)\cup\Rho(B)=\{\{1\},\{2\},\emptyset\},\Rho(A\cup B)=\{\{1,2\},\{1\},\{2\},\emptyset\}$
### 9.4
$\rightarrow:$
$\forall X\subseteq A,$ namely $X\in\Rho(A),$ because $A\subseteq B,$ so $X\subseteq B,$ namely $X\in\Rho(B).$ So if $A\subseteq B,$ then $\forall X\in\Rho(A)\rightarrow X\in\Rho(B),$ namely $\Rho(A)\subseteq\Rho(B).$
$\leftarrow:$
Consider the contrapositive:If $A\not\subseteq B,$ then $\Rho(A)\not\subseteq\Rho(B).$ Obviously that if $A$ isn't contained in $B,$ then there must exist a subset of $A$ which contains an element that doesn't belong to $B,$ so it can't be a subset of $B.$ So we find a subset of $A$ that isn't a subset of $B,$ thus have proved $\Rho(A)\not\subseteq\Rho(B).$
### 9.12
**(a)**
*Proof.*
$\leftarrow:$
Obviously that for all nonempty sets $A,B,C$ and $D,$ if $A=C$ and $B=D,$ we have $A\times B=C\times D.$
$\rightarrow:$
Considering $A,B,C$ and $D$ are all nonempty sets
$\quad A\times B=C\times D$
$\leftrightarrow (\forall(x,y)\in A\times B\rightarrow(x,y)\in C\times D)\land(\forall(x,y)\in C\times D\rightarrow(x,y)\in A\times B)$
$\leftrightarrow ((\forall x\in A\rightarrow x\in C)\land(\forall y\in B\rightarrow y\in D))\land((\forall x\in C\rightarrow x\in A)\land(\forall y\in D\rightarrow y\in B))$
$\leftrightarrow((\forall x\in A\rightarrow x\in C)\land(\forall x\in C\rightarrow x\in A))\land((\forall y\in B\rightarrow y\in D)\land(\forall y\in D\rightarrow y\in B))$
$\leftrightarrow ((A\subseteq C)\land(C\subseteq A))\land((B\subseteq D)\land(D\subseteq B))$
$\leftrightarrow (A=C)\land(B=D)$
$Q.E.D$
**(b)**
Without loss of generality,suppose $A=\emptyset,$ then without $B\subseteq D,$ we can still have $A\times B\subseteq C\times D,$ because $\forall(x,y)\in A\times B\rightarrow(x,y)\in C\times D$ will be a tataulogy as there are no elements in $A$ hence no elements in $A\times B.$ Then the proof will be invalid.
### 9.13
Yes.
*Proof.*
$\rightarrow:$
If $A\subseteq C$ and $B\subseteq D,$ then
$\quad \forall(x,y)\in A\times B$
$\leftrightarrow x\in A\land y\in B$
$\rightarrow x\in C\land x\in D$
$\leftrightarrow (x,y)\in C\times D$
So $A\times B\subseteq C\times D.$
$\leftarrow:$
Consider the contrapositive: If $A\not\subseteq C\lor B\not\subseteq D,$ then $A\times B\not\subseteq C\times D.$
Without loss of generality, we suppose $A\not\subseteq C,$ so $\exists x_\in A\land x_0\notin C,$ consider $(x_0,y)$ for every $y\in B,$ obviously $(x_0,y)\in A\times B,$ but $(x_0,y)\notin B\times D,$ so $A\times B\not\subseteq C\times D.$
### 9.14
**(a)**
*True.*
*Proof.*
$\quad\forall(x,y)\in A\times(B\cup C)$
$\leftrightarrow x\in A\land y\in B\cup C$
$\leftrightarrow x\in A\land (y\in B\lor y\in C)$
$\leftrightarrow (x\in A\land y\in B)\lor(x\in A\land y\in C)$
$\leftrightarrow ((x,y)\in A\times B)\lor((x,y)\in A\times C)$
$\leftrightarrow (x,y)\in (A\times B)\cup(A\times C)$
So $A\times(B\cup C)=(A\times B)\cup(A\times C).$
**(b)**
*True.*
*Proof.*
$\quad\forall(x,y)\in A\times(B\cap C)$
$\leftrightarrow x\in A\land y\in B\cap C$
$\leftrightarrow x\in A\land (y\in B\land y\in C)$
$\leftrightarrow (x\in A\land y\in B)\land(x\in A\land y\in C)$
$\leftrightarrow ((x,y)\in A\times B)\land((x,y)\in A\times C)$
$\leftrightarrow(x,y)\in(A\times B)\cap(A\times C)$
So $A\times(B\cap C)=(A\times B)\cap(A\times C).$
### 9.16
**(a)**
*Proof.*
If $(a,b)=(x,y),$ namely $\{\{a\},\{a,b\}\}=\{\{x\},\{x,y\}\}$
So the elements of the two sets must be all equal.
So $\{a\}=\{x\}\land\{a,b\}=\{x,y\}$ or $\{a\}=\{x,y\}\land\{a,b\}=\{x\}.$
If the latter part of the statement is true, then $\{a\}=\{x,y\},$ oviously $\{a\}\neq\{x,y\}$ because the number of elements in them are not even equal. So the first part of the statement is true, namely $\{a\}=\{x\}\land\{a,b\}=\{x,y\}$ is true.
Now that $\{a\}=\{x\},$ so $a=x.$ Furthermore, $\{a,b\}=\{x,y\}\rightarrow (a=x\land b=y)\lor(a=y\land b=x).$ Since $a=x,$ then $b=y.$
**(b)**
*Proof.*
If $a\in A$ and $b\in B,$ then $\{a\}\subseteq A,\{a\}\in\Rho(A),$ namely $\{a\}\in\Rho(A\cup B);\{a,b\}\subseteq A\cup B,\{a,b\}\in\Rho(A\cup B).$ So $\{\{a\},\{a,b\}\}\subseteq\Rho(A\cup B),$ namely $\{\{a\},\{a,b\}\}\in\Rho(\Rho(A\cup B)).$ So $(a,b)\in\Rho(\Rho(A\cup B)).$
**(c)**
*Proof.*
$\quad A\subseteq C\land B\subseteq D$
$\leftrightarrow\forall x\in A,\forall y\in B,\{x\}\subseteq A\rightarrow\{x\}\subseteq C\rightarrow\{x\}\subseteq C\cup D,\{x,y\}\subseteq A\cup B\rightarrow\{x,y\}\subseteq C\cup D$
$\leftrightarrow \forall \{\{x\},\{x,y\}\}\subseteq\Rho(A\cup B)\rightarrow\{\{x\},\{x,y\}\}\subseteq\Rho(C\cup D)$
$\leftrightarrow \forall \{\{x\},\{x,y\}\}\in\Rho(\Rho(A\cup B))\rightarrow\{\{x\},\{x,y\}\}\in\Rho(\Rho(C\cup D))$
$\leftrightarrow\forall(x,y)\in A\times B\rightarrow(x,y)\in C\times D.$
So if $A\subseteq C$ and $B\subseteq D,$ then $A\times B\subseteq C\times D.$