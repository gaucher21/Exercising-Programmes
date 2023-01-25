# Homework
## Problems on UD
### 13.3
**(a)**
*No.*
Because $\forall x\in\R,\exists y_1,y_2,y_1\neq y_2,x^2+y_1^2=4,x^2+y_2^2=4,$ namely $\forall x\in\R,\exists y_1,y_2,y_1\neq y_2,(x,y_1)\in f,(x,y_2)\in f.$
**(b)**
*No.*
Because consider $x_0=0\in\R,$ whereas $f(x_0)=\frac{1}{x_0+1}\notin\R.$
**(c)**
*Yes.*
Because **(i)** $\forall(x,y)\in\R^2,x+y\in\R,$ namely $\forall(x,y)\in\R^2,\exists f(x,y)\in\R.$ **(ii)** $\forall(x_1,y_1),(x_2,y_2)\in\R^2,$ if $(x_1,y_1)=(x_2,y_2),$ namely $x_1=x_2,y_1=y_2,$ then $x_1+y_1=x_2+y_2,$ namely $f(x_1,y_1)=f(x_2,y_2).$
**(d)**
*Yes.*
Because **(i)** $\forall[a,b],$ where $a,b\in\R,a\leq b,$ we have $f([a,b])=a\in\R$ **(ii)** $\forall[a_1,b_1],[a_2,b_2],$ if $[a_1,b_1]=[a_2,b_2],$ namely $a_1=a_2,b_1=b_2,$ then $f([a_1,b_1])=a_1=a_2=f([a_2,b_2]).$
**(e)**
*Yes.*
Because **(i)** $\forall(n,m)\in\N\times\N,m\in\N,$ thus $n\in\R,$ so $\forall(n,m)\in\N\times\N,\exists f(n,m)=m\in\R.$ **(ii)** $\forall(n_1,m_1),(n_2,m_2)\in\N\times\N,f(n_1,m_1)=m_1,f(n_2,m_2)=m_2,$ so if $(n_1,m_1)=(n_2,m_2),$ namely $m_1=m_2,n_1=n_2,$ then $f(n_1,m_1)=f(n_2,m_2).$
**(f)**
*Yes.*
Because **(i)** Since $0\in\R,$ so $\forall x\in R,f(x)=0$ or $f(x)=x,0\in\R$ and $x\in\R,$ namely $\forall x\in\R,\exists f(x)\in\R.$ **(ii)**  $\forall x_1,x_2<0,$ if $x_1=x_2=k,$ then $f(x_1)=f(x_2)=k.$ $\forall x_1,x_2>0,$ if $x_1=x_2,$ then $f(x_1)=f(x_2)=0.$ If $x_1=0,x_2=0,$ then $f(x_1)=f(x_2)=0.$
**(g)**
*No*
Because consider $6\in Q,$ then since $6=2\times 3,f(6)=7,$ again since $6=3\times 2,f(6)=5.$ So there are two different $f(6),$ which contradicts with the definition.
**(h)**
*Yes.*
Because **(i)** every circle has a circumference and **(ii)** every circle only has one definite circumference.
**(i)**
*Yes.*
Because **(i)** every polynominal with real coefficients is derivable and **(ii)** once the polynominal is definite, then its only derivative it's definite and only.
**(j)**
*Yes.*
Because **(i)** every polyminal is integrable, and **(ii)** its definite integral on $[0,1]$ is definite and only.
### 13.4
*Proof.*
**(i)** $\forall \Alpha\in\Rho(\R),$ there are two cases. **(a)** If $\Alpha\cap\N=\emptyset,$ namely all the numbers in $\Alpha$ are not natural numbers, then $f(\Alpha)=-1\in\Z.$ **(b)** If $\Alpha\cap\N\neq\emptyset,$ namely there are natural numbers in $\Alpha,$ then according to Well-ordering principle of $\N,$ every nonempty subset of the natural numbers contains a minimum, and $\Alpha\cap\N$ is a nonempty subset of $\N,$ so there exists $min(\Alpha\cap\N)\in\N,$ thus $min(\Alpha\cap\N)\in\Z.$ So $\forall\Alpha\in\Rho(\R),\Alpha\cap\N\neq\emptyset,$ then $\exists f(\Alpha)=min(\Alpha\cap\N)\in\Z.$
**(ii)** 
From the definition, we can see that if $\Alpha_1=\Alpha_2,$ then there are two cases. **(a)** $\Alpha_1=\Alpha_2,\Alpha_1\cap\N=\emptyset,\Alpha_2\cap\N=\emptyset,$ so $f(\Alpha_1)=f(\Alpha_2)=-1.$ **(b)** $\Alpha_1=\Alpha_2,\Alpha_1\cap\N\neq\emptyset,\Alpha_2\cap\N\neq\emptyset,$ so $f(\Alpha_1)=min(\Alpha_1\cap\N),f(\Alpha_2)=min(\Alpha_2\cap\N),$ because $\Alpha_1=\Alpha_2,$ so $\Alpha_1\cap\N=\Alpha_2\cap\N,$ so $min(\Alpha_1\cap\N)=min(\Alpha_2\cap\N),$ namely $f(\Alpha_1)=f(\Alpha_2).$
### 13.5
**(a)**
*Yes, it is.*
*Proof.*
**(i)** Consider an arbitrary set $A,\forall x\in X,x$ is either contained in $A$ or not, so $\forall x,\exists\chi_A(x)=1$ or $\chi_A(x)=0.$
**(ii)** Consider an arbitrary set $A,\forall x_1,x_2\in X,$ if $x_1=x_2,$ then either both $x_1$ and $x_2$ are contained in $A,$ or neither of them are contained in $A,$ so $\chi_A(x_1)=\chi_A(x_2).$
**(b)**
Domain:$X$
Range:$\{0,1\}$
### 13.7
**(i)** To prove $ran(f)\subseteq\R\setminus\{\frac{1}{2}\}.$
$\forall x\in\R\setminus\{\frac{3}{2}\},y=\frac{x-5}{2x-3}\in ran(f),$ and obviously $y\in\R,$ os $ran(f)\subseteq\R.$ Now we have to show $y\neq\frac{1}{2}.$ Suppose $\exists y_0\in ran(f),y_0=\frac{1}{2}.$ So $\exists x_0\in\R\setminus\{\frac{3}{2}\},\frac{x-5}{2x-3}=\frac{1}{2},$ furthermore we have $2x-10=2x-3,$ then $-10=-3.$ So $y\neq\frac{1}{2},$ namely $\forall y\in ran(f),y\in\R\setminus\{\frac{1}{2}\},$ then $ran(f)\subseteq\R\setminus\{\frac{1}{2}\}.$
**(ii)** To prove $\R\setminus\{\frac{1}{2}\}\subseteq ran(f).$
$\forall y\in\R\setminus\{\frac{1}{2}\},$ let $x=\frac{3y-5}{2y-1},$ since $y\neq\frac{1}{2},$ we can see that $x\in\R.$ Now we have to show that $x\neq\frac{3}{2},$ suppose $x=\frac{3}{2},$ then $\frac{3y-5}{2y-1}=\frac{3}{2},$ so $6y-10=6y-3,$ then $-10=-3.$ So $x\neq\frac{3}{2},$ namely $x\in dom(f)$ and $f(x)=\frac{\frac{3y-5}{2y-1}-5}{2\frac{3y-5}{2y-1}-3}=y.$ So $\R\setminus\{\frac{1}{2}\}\subseteq ran(f).Q.E.D.$
### 13.11
*No.*
Because consider $A=\{1,2,3\},B=\{4,5\},$ we can define $f=\{(1,4),(2,4),(3,5)\}$ as a function from $A$ to $B,$ then the relation $\{(y,x):(x,y)\in f\}=\{(4,1),(4,2),(5,3)\},$ and obviously the relation contradicts with the second property of a function because $4\in B,(4,1),(4,2)\in\{(y,x):(x,y)\in f\},$ but $1\neq 2.$ So $\{(y,x):(x,y)\in f\}$ isn't necessarily a function from $B$ to $A.$
### 13.13
The identity function $i_X.$
### 14.8
**(a)**
*Not an injection, not a surjection.*
$f(-1)=f(1)=\frac{1}{2}.$
$ran(f)=(0,1].$
**(b)**
*Not an injection, not a surjection.*
$f(0)=f(2\pi)=0.$
$ran(f)=[-1,1].$
**(c)**
*Not an injection, but a surjection.*
$f(10,2)=f(4,5)=20.$
**(d)**
*Not an injection, but a surjection.*
$f((2,1),(10,1))=f((4,1),(5,1))=21.$
It's the scalar product of two 2-dimensional vectors.
**(e)**
*Not an injection, not a surjection.*
$f((0,0),(1,0))=f((0,0),(-1,0))=1.$
$ran(f)=[0,+\infty).$
It's the distance of two points in the 2-dimensional plane.
**(f)**
*An injection and a surjection.*
**(g)**
*An injection and a surjection.*
**(h)**
*Not a injection and not a surjection.*
Consider $B=\{1,2\},A_1=\{1,3\},A_2=\{1,3,4\},f(A_1\cap B)=f(A_2\cap B),$ but $A_1\neq A_2.$
$ran(f)=B.$
**(i)**
*An injection but not a surjection.*
$ran(f)=(0,+\infty).$
### 14.12
$f(x)=c+\frac{d-c}{b-a}(x-a).$
*Proof.*
**injective:**
We have to show that $\forall x_1,x_2\in[a,b],y_1=f(x_1)=c+\frac{d-c}{b-a}(x_1-a),y_2=f(x_2)=c+\frac{d-c}{b-a}(x_2-a),y_1,y_2\in[c,d],$ if $y_1=y_2,$ then $x_1=x_2.$ Because $y=c+\frac{d-c}{b-a}(x-a),$ so $x=\frac{ad-bc}{d-c}+\frac{b-a}{d-c}y.$ Suppose $x_1\neq x_2,$ so $\frac{ad-bc}{d-c}+\frac{b-a}{d-c}y_1\neq\frac{ad-bc}{d-c}+\frac{b-a}{d-c}y_2,$ then $y_1\neq y_2,$ which contradicts with our hypothesis. So we have prove that $f$ is an injection.
**surjective:**
We only have to show that $[c,d]\subseteq ran(f).\forall y\in[c,d],x=\frac{ad-bc}{d-c}+\frac{b-a}{d-c}y,$ so $x\in[a,b]$ and $f(x)=c+\frac{d-c}{b-a}(\frac{ad-bc}{d-c}+\frac{b-a}{d-c}y-a)=y.$ So $y\in ran(f).$ Thus we have prove $[c,d]\subseteq ran(f),$ and it is obviously that $ran(f)\subseteq[c,d],$ so $ran(f)=[c,d],$ so $f$ is surjective.
### 14.13
*Yes, it's a function, and it's onto, but it isn't one-to-one.*
*Proof.*
**Prove function:**
**(i)** For every real-valued function $f$ defined on $[0,1],$ since it's real-valued and is defined on $[0,1],$ so $\exists f(0)\in\R.$ Namely $\forall f\in F([0,1]),\exists\phi(f)\in\R.$
**(ii)** $\forall f_1,f_2\in F([0,1]),$ if $f_1=f_2,$ then $f_1(0)=f_2(0),$ namely $\phi(f_1)=\phi(f_2).$
**Prove onto:**
We just have to show that $\R\subseteq ran(\phi).$ It is obviously that $ran(\phi)$ is the set of value at $0$ of all the real-valued functions defined on $[0,1].\forall x\in\R,$ then there must exist a function defined on $[0,1]$ that $f(0)=x.$ So $\forall x\in\R,x\in ran(\phi).$ Namely $\R\subseteq ran(\phi).$ Now we proved that $\phi$ is onto.
**Prove not one-to-one:**
Counterexample: $f_1=\sqrt[]{x}+\sqrt[]{1-x},f_2=\sqrt[]{x}-\sqrt[]{1-x}+2.f_1,f_2\in F([0,1]),$ obviously $f_1\neq f_2,$ but $\phi(f_1)=\phi(f_2)=1.$
### 14.15
*Proof.*
**(i)** $\forall x\in\R,$ then $\exists f(x)\in\R,$ and $f(x)\cdot f(x)\in\R,$ namely $\forall x\in\R,\exists(f\cdot f)(x)=f(x)\cdot f(x)\in\R.$
**(ii)** $\forall x_1,x_2\in\R,$ suppose that $x_1=x_2,$ since $f$ is function, so $f(x_1)=f(x_2),$ so $f(x_1)\cdot f(x_1)=f(x_2)\cdot f(x_2),$ then $(f\cdot f)(x_1)=(f\cdot f)(x_2).$
**(a)**
*Yes, there exists.*
Example: $f(x)=e^x.$
**(b)**
No.
$ran(f\cdot f)=|ran(f)|$
### 15.1
**(a)**
$(f◦g)(x)=\frac{1}{1+x^2}$ domain: $\R$ range: $(0,1]$
$(g◦f)(x)=\frac{1}{(1+x)^2}$ domain: $(-\infty,-1)\cup(-1,+\infty)$ range: $(0,+\infty)$
**(b)**
$(f◦g)(x)=x$ domain: $[0,+\infty)$ range: $[0,+\infty)$
$(g◦f)(x)=x$ domain: $\R$ range: $\R$
**(c)**
$(f◦g)(x)=\frac{1}{x^2+1}$ domain: $\R$ range: $(0,1]$
$(g◦f)(x)=\frac{1}{x^2}+1$ domain: $(-\infty,0)\cup(0,+\infty)$ range: $(1,+\infty)$
**(d)**
$(f◦g)(x)=|x|$ domain: $\R$ range: $[0,+\infty)$
$(g◦f)(x)=|x|$ domain: $\R$ range: $[0,+\infty)$
### 15.6
**(a)**
$(f◦g)(x)=x$
$(g◦f)(x)=x$
**(b)**
$\forall f:A\rightarrow B,g:B\rightarrow A,$ if $f=g^{-1},g=f^{-1},$ then $f◦g=i_B,g◦f=i_A.$
It derives from ***Theorem 15.8***
### 15.7
**(a)**
**(i)** $f(x)=-(x-2)^2+5$ $g(x)=x-3$
![](../pics/8.png)
**(ii)** $f(x)=x+3$ $g(x)=x-3$
![](../pics/9.png)
**(iii)** Impossible.

**(b)**
$A=\{1,2,3\},B=\{4,5\},f(x)=-(x-2)^2+5,g(x)=x-3$
Because in this example, $f$ isn't bijective, whereas in ***Theorem15.4 (iv)*** , we declare that $f$ must be a bijection and then the theorem is valid.
**(c)**
$A=\{4,5\},B=\{1,2,3\},f(x)=x-3,g(x)=-(x-2)^2+5$
Because in this example, $f$ isn't bijective, whereas in ***Theorem15.4 (iv)*** , we declare that $f$ must be a bijection and then the theorem is valid.
**(d)**
$f$ must be onto, but it needn't be one-to-one.
**(e)**
$f$ must be one-to-one, but it needn't be onto.
### 15.11
*Proof.*
Because $f◦g_1=f◦g_2,$ so $\forall x\in B,(f◦g_1)(x)=(f◦g_2)(x).$ Suppose $\forall x\in B,g_1(x)=\alpha_1,g_2(x)=\alpha_2.$ From $\forall x\in B,(f◦g_1)(x)=(f◦g_2)(x)$ we can know that $\forall x\in B,f(\alpha_1)=f(\alpha_2).$ Because $f$ is bijective, so $f(\alpha_1)=f(\alpha_2)\leftrightarrow\alpha_1=\alpha_2.$ So $\forall x\in B,\alpha_1=\alpha_2,$ namely $g_1(x)=g_2(x).$ Since $\forall x\in B,g_1(x)=g_2(x),$ then $g_1=g_2.Q.E.D.$
If $g_1◦f=g_2◦f$ and $f$ is bijective, must $g_1=g_2.$
### 15.12
Yes, it is.
If $f$ is one-to-one, the eqiuvalence class of a point $a\in A$ is $E_a=\{a\}$
### 15.13

No.
$f(x)=x$ is such a function.
### 15.14
**(a)**
*Proof.*
**Prove it a function:**
$\forall(x,y)\in A\times C,$ so $x\in A$ and $y\in C,$ since $f$ and $g$ are functions, there exists $f(x)\in B$ and $g(y)\in D.$ So there exists $(f(x),g(y))\in B\times D.$ So we have proved that $\forall(x,y)\in A\times C,\exists H(x,y)=(f(x),g(y))\in B\times D.$
And $\forall(x_1,y_1),(x_2,y_2)\in A\times C,$ if $(x_1,y_1)=(x_2,y_2),$ namely $x_1=x_2$ and $y_1=y_2,$ then $f(x_1)=f(x_2),g(y_1)=g(y_2),$ namely $(f(x_1),g(y_1))=(f(x_2),g(y_2)).$ So we have proved that $\forall(x_1,y_1),(x_2,y_2)\in A\times C,$ if $(x_1,y_1)=(x_2,y_2),$ then $H(x_1,y_1)=H(x_2,y_2).$
In conclusion, $H$ is a function.
**Prove it one-to-one:**
We have to show that If $H(x_1,y_1)=H(x_2,y_2),$ then $(x_1,y_1)=(x_2,y_2),$ namely $x_1=x_2,y_1=y_2.$
If $H(x_1,y_1)=H(x_2,y_2),$ then $(f(x_1),g(y_1))=(f(x_2),g(y_2)),$ namely $f(x_1)=f(x_2),g(y_1)=g(y_2),$ since $f$ and $g$ are one-to-one, so $x_1=x_2,y_1=y_2,$ namely $(x_1,y_1)=(x_2,y_2).$ Thus, we haave proved that if $H(x_1,y_1)=H(x_2,y_2),$ then $(x_1,y_1)=(x_2,y_2),$ namely $H$ is one-to-one.
**(b)**
*Proof.*
We have to show that if $ran(f)=B,ran(g)=D,$ then $ran(H)=B\times D.$
To show that, we just have to show $B\times D\subseteq ran(H)$ as $ran(H)\subseteq B\times D$ is obvious.
Consider $\forall(\alpha,\beta)\in B\times D,$ namely $\alpha\in B,\beta\in D.$ Since $ran(f)=B,ran(g)=D,$ so there exist $x\in A$ and $y\in C$ such that $f(x)=\alpha,g(y)=\beta.$ Since $(f(x),g(y))=H(x,y),$ so $(f(x),g(y))\in ran(H),$ namely $(\alpha,\beta)\in ran(H).$ Thus we have showed that $\forall(\alpha,\beta)\in B\times D,(\alpha,\beta)\in ran(H),$ namely $B\times D\subseteq ran(H).$ So we have proved that if $ran(f)=B,ran(g)=D,$ then $ran(H)=B\times D.$
### 15.15  
**Not a function:**
Consider it when $A\cap C\neq\emptyset,$ so $\exists x_0\in A\cap C,$ we have $H(x_0)=f(x_0)$ and $H(x_0)=g(x_0),$ if $f(x_0)\neq g(x_0),$ then obviously $H$ isn't a function.
**Is a function:**
Consider $f\neq g.$ If $A\cap C=\emptyset,$ then $\forall x\in A\cup C,x\in A$ or $x\in C.$ If $x\in A,H(x)=f(x),$ if $x\in C,H(x)=g(x).$ So $\forall x\in A\cup C,\exists H(x)\in B\cup D$ and if $x_1=x_2,$ then $H(x_1)=H(x_2).$ So $H$ is a function.
If $A\cap C=\emptyset,$ then $H$ is a function.
### 15.20
**(a)**
Consider $\forall x_1,x_2\in A_1,$ because $A_1\subset A,$ so $x_1\in A,x_2\in A.$ Because $f$ is one-to-one, so if $f(x_1)=f(x_2),$ then $x_1=x_2.$ So $\forall x_1,x_2\in A_1,$ if $F(x_1)=F(x_2),$ namely $f(x_1)=f(x_2),$ then $x_1=x_2.$ So we have proved $f|_{A_1}$ is one-to-one.
**(b)**
Because $F:A_1\rightarrow B,\forall x\in A_1,F(x)=f(x).$ So obviously $ran(F)\subseteq ran(f).$ Because $f|_{A_1}$ is onto, so $ran(F)=B.$ So $B\subseteq ran(f).$ Because $ran(f)\subseteq B,$ so $ran(f)=B,$ namely $f$ is onto.
### 16.19
**(i)** Because $f$ is onto, so $\forall X\in\{f^{-1}(\{b\}):b\in B\},X\neq\emptyset.$
**(ii)** $\cup_{b\in B}f^{-1}(\{b\})=f^{-1}(B)=A.$
**(iii)** $b_1,b_2\in B,$ suppose $f^{-1}(\{b_1\})\cap f^{-1}(\{b_2\})\neq\emptyset,$ but $f^{-1}(\{b_1\})\neq f^{-1}(\{b_2\}),$ so $b_1\neq b_2.$ Consider $x_0\in f^{-1}(\{b_1\})\cap f^{-1}(\{b_2\}),$ so $f(x_0)=b_1$ and $f(x_0)=b_2,$ but $b_1\neq b_2,$ thus contradicts with definition of function. So if $f^{-1}(\{b_1\})\cap f^{-1}(\{b_2\})\neq\emptyset,$ then $f^{-1}(\{b_1\})=f^{-1}(\{b_2\}).$
### 16.20
**(a)**
No, it needn't.
**(b)**
*Proof.*
If $f(A_1)=f(A_2),$ suppose $A_1\neq A_2,$ without loss of generality, consider it when $\exists a\in A_1,a\notin A_2.$ Because $f$ is bijective, so $f$ is one-to-one, then if $f(x)=f(a),x=a.$ Because $a\in A_1,a\notin A_2,$ so $f(a)\in f(A_1),f(a)\notin f(A_2),$ so $f(A_1)\neq f(A_2).$ Contradict. So if $f(A_1)=f(A_2),$ then $A_1=A_2.$ I just used one-to-one.
### 16.21
**(a)**
No, it needn't.
**(b)**
*Proof.*
If $f^{-1}(B_1)=f^{-1}(B_2),$ suppose $B_1\neq B_2.$ Without loss of generality, suppose that $\exists b\in B_1,b\notin B_2.$ Because $f$ is bijective, so $f$ is onto, then $\forall y\in Y\leftrightarrow\exists x\in X,$ such that $y=f(x).$ Consider $b,$ because $b\in B_1,b\notin B_2,$ so there exists $a_1\in X$ such that $b=f(a_1)$ and $f(a_1)\notin B_2.$ So $a_1\in f^{-1}(B_1)$ and $a_1\notin f^{-1}(B_2),$ so $f^{-1}(B_1)\neq f^{-1}(B_2).$ Contradict. So if $f^{-1}(B_1)=f^{-1}(B_2),$ then $B_1=B_2.$ I just used onto.
### 16.22
**(a)**
Yes, it must.
**(b)**
*Proof.*
$\forall x\in X,$ if $x\notin A_1\cap A_2,$ then $\chi_{A_1\cap A_2}(x)=0.$ Because $x\notin A_1\cap A_2,$ so $\chi_{A_1}$ and $\chi_{A_2}$ can't be $1$ at the same time, namely $\chi_{A_1}\cdot\chi_{A_2}=0.$
$\forall x\in X,$ if $x\in A_1\cap A_2,$ then $\chi_{A_1\cap A_2}(x)=1.$ Because $x\in A_1\cap A_2,$ namely $x\in A_1$ and $x\in A_2,$ so $\chi_{A_1}=1,\chi_{A_2}=1,\chi_{A_1}\cdot\chi_{A_2}=1.$
So we have showed that in any cases, $\chi_{A_1\cap A_2}=\chi_{A_1}\cdot\chi_{A_2}.$
**(c)**
For all $x\in X,$ consider it in the following four cases:
**(1) $x\in A_1,x\in A_2$:**
In this case, $\chi_{A_1}=1,\chi_{A_2}=1,\chi_{A_1\cap A_2}=1,\chi_{A_1\cup A_2}=1.$ So $\chi_{A_1}+\chi_{A_2}-\chi_{A_1\cap A_2}=\chi_{A_1\cup A_2}=1.$
**(2) $x\in A_1,x\notin A_2$:**
In this case, $\chi_{A_1}=1,\chi_{A_2}=0,\chi_{A_1\cap A_2}=0,\chi_{A_1\cup A_2}=1.$ So $\chi_{A_1}+\chi_{A_2}-\chi_{A_1\cap A_2}=\chi_{A_1\cup A_2}=1.$
**(3) $x\notin A_1,x\in A_2.$:**
In this case, $\chi_{A_1}=0,\chi_{A_2}=1,\chi_{A_1\cap A_2}=0,\chi_{A_1\cup A_2}=1.$ So $\chi_{A_1}+\chi_{A_2}-\chi_{A_1\cap A_2}=\chi_{A_1 \cup A_2}=1.$
**(4) $x\notin A_1,x\notin A_2$:**
In this case, $\chi_{A_1}=0,\chi_{A_2}=0,\chi_{A_1\cap A_2}=0,\chi_{A_1\cup A_2}=0.$ So $\chi_{A_1}+\chi_{A_2}-\chi_{A_1\cap A_2}=\chi_{A_1\cup A_2}=0.$
In conclusion, we have showed that in all possible cases, $\chi_{A_1}+\chi_{A_2}-\chi_{A_1\cap A_2}=\chi_{A_1\cup A_2},$ thus it's proved.
**(d)**
$\chi_{X\setminus A_1}\cdot\chi_{X\setminus A_2}=\chi_{X\setminus A_1\cup A_2}$