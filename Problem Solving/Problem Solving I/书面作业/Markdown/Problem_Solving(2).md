# Homework
## Problems on UD
### 2.1
**(a)** **antecedent:** it's raining **conclusion:** I'll stay home
**(b)** **antecedent:** the baby cries **conclusion:** I wake up
**(c)** **antecedent:** I wake up **conclusion:** the fire alarm goes off
**(d)** **antecedent:** x is odd **conclusion:** x is prime
**(e)** **antecedent:** x is prime **conclusion:** x is odd
**(f)** **antecedent:** you can come to the party **conclusion:** you have an invitation
**(g)** **antecedent:** the bell rings **conclusion:** I leave the house
### 2.5
**Truth Table:**
|   P   |   Q   |   R   |  ¬R   | (¬R∨Q) | P → (¬R∨Q) | (P → (¬R∨Q))∧R |
| :---: | :---: | :---: | :---: | :----: | :--------: | :------------: |
|   T   |   T   |   T   |   F   |   T    |     T      |       T        |
|   T   |   T   |   F   |   T   |   T    |     T      |       F        |
|   T   |   F   |   T   |   F   |   F    |     F      |       F        |
|   F   |   T   |   T   |   F   |   T    |     T      |       T        |
|   T   |   F   |   F   |   T   |   T    |     T      |       F        |
|   F   |   T   |   F   |   T   |   T    |     T      |       F        |
|   F   |   F   |   T   |   F   |   F    |     T      |       T        |
|   F   |   F   |   F   |   F   |   T    |     T      |       F        |
**This statement form is neither a tautology nor a contradiction.**
### 2.6
**(a)** I won't do my homework or I won't pass this class.
**(b)** Seven isn't an integer or seven isn't even.
**(c)** T is continuous and T isn't bounded.
**(d)** I can neither eat dinner nor go to the show.
**(e)** x is odd and x isn't prime.
**(f)** x is prime and x isn't odd.
**(g)** I am not home and Sam won't answer the phone or I am not home and Sam won't tell you how to reach me.
**(h)** The stars are green and the world isn't eleven feet wide or the white horse is shining and the world isn't eleven feet wide.
### 2.7
**(a)** ¬(¬P)$\leftrightarrow$P
**(b)** ¬(P∨Q)$\leftrightarrow$¬P∧¬Q
**(c)** ¬(P∧Q)$\leftrightarrow$¬P∨¬Q
**(d)** P$\rightarrow$Q$\leftrightarrow$¬P∨Q
### 2.8
**Answer:** (P∧Q)∨R
**Process:** There are only two situations.The first one is P∧(Q∨R),which contradicts the 5~th~ row of the truth table,so it's obvious that the correct answer is (P∧Q)∨R.
### 2.10
**(a)** If it is sunny,then it snows.
**(b)** If it is sunny,then it doesn't snow and it is sunny.
### 2.11
**(a)** Suppose that *A* means Arnie is a truth-teller,*B* means each person living on this island is either a truth-teller or a liar.Because *B* is true,so *A*$\rightarrow$*B* is a tautology,which means that no matter *A* is true or false,what Arnie says is always true,so Arnie must be a truth-teller.
**(b)** Suppose that *A* means Arnie is a truth-teller,*B* means Barnie is a truth-teller.So we can paraphrase Arnie's sentence into *A*$\rightarrow$*B*.Then we can write down the truth table.
|   A   |   B   | A$\rightarrow$B | A$\leftrightarrow$(A$\rightarrow$B) |
| :---: | :---: | :-------------: | :---------------------------------: |
|   T   |   T   |        T        |                  T                  |
|   T   |   F   |        F        |                  F                  |
|   F   |   T   |        T        |                  F                  |
|   F   |   F   |        T        |                  F                  |
So Arnie and Barnie are both truth-tellers.
### 3.2
**(a)** **contrapositive:** If you don't live in a white house,then you aren't the President of the United States.
$\quad\quad\quad$ **converse:** If you live in a white house,then you are the President of the United States.
**(b)** **contrapositive:** If you don't need eggs,then you are not going to bake a souffle.
$\quad\quad\quad$ **converse:** If you need eggs,you are going to bake a souffle.
**(c)** **contrapositive:** If x isn't an integer,then x isn't a real number.
$\quad\quad\quad$ **converse:** If x is an integer,then x is a real number.
**(d)** **contrapositive:** If x^2^ $\geq$ 0,then x isn't a real number.
$\quad\quad\quad$ **converse:** If x^2^ $<$ 0,then x is a real number.
### 3.6
|   C   |   B   |   Y   |  B∨C  |  C∧B  | ==(C∧B)$\rightarrow$(C∧B)∧Y== |  B∨Y  | ==(B∨Y)$\rightarrow$(B∨Y)∧C== | ==¬(C∧Y)== | ==B∨C∨Y== |
| :---: | :---: | :---: | :---: | :---: | :---------------------------: | :---: | :---------------------------: | :--------: | :-------: |
|   T   |   T   |   T   |   T   |   T   |               T               |   T   |               T               |     F      |     T     |
|   T   |   T   |   F   |   T   |   T   |               F               |   T   |               T               |     T      |     T     |
|   T   |   F   |   T   |   T   |   F   |               T               |   T   |               T               |     F      |     T     |
|   F   |   T   |   T   |   T   |   F   |               T               |   T   |               F               |     T      |     T     |
|   T   |   F   |   F   |   T   |   F   |               T               |   F   |               T               |     T      |     T     |
|   F   |   T   |   F   |   T   |   F   |               T               |   T   |               F               |     T      |     T     |
|   F   |   F   |   T   |   F   |   F   |               T               |   T   |               F               |     T      |     T     |
|   F   |   F   |   F   |   F   |   F   |               T               |   F   |               T               |     T      |     F     |
All the highlighted statement forms must be true,so Matilda eats only cereal on Monday.
### 3.7
**(a)** *A*="the coat is green";*B*="the moon is full";*C*="the cow jumps over the moon"
$\quad$ *A*$\rightarrow$(*B*∨*C*)
**(b)** (¬*B*∧¬*C*)$\rightarrow$¬*A*
$\quad$ If the moon isn't full and the cow doesn't jump over it,then the coat isn't green.
**(c)**  (*B*∨*C*)$\rightarrow$*A*
$\quad$ *A*$\rightarrow$(*B*∨*C*)
$\quad$ If the coat is green,then the moon is full or the cow jumps over it.
**(d)** *A*$\rightarrow$(¬*B*∧¬*C*)
$\quad$ (¬*B*∧¬*C*)$\rightarrow$*A*
$\quad$ If the moon isn't full and the cow doesn't jump over it,then the coat is green.
**(e)** *A*$\rightarrow$(*B*∨*C*)$\leftrightarrow$(¬*B*∧¬*C*)$\rightarrow$¬*A*
### 3.8
**(a)**
|   P   |   Q   | P$\rightarrow$Q |
| :---: | :---: | :-------------: |
|   T   |   T   |        T        |
|   T   |   F   |        F        |
|   F   |   T   |        T        |
|   F   |   F   |        T        |

|   P   |  ¬P   |   Q   | Q∨¬P  | P$\rightarrow$(Q∨¬P) |
| :---: | :---: | :---: | :---: | :------------------: |
|   T   |   F   |   T   |   T   |          T           |
|   T   |   F   |   F   |   F   |          F           |
|   F   |   T   |   T   |   T   |          T           |
|   F   |   T   |   F   |   T   |          T           |
**(b)**
P$\rightarrow$Q and P$\rightarrow$(Q∨¬P) are equivalent statement forms.
### 3.9
| $\quad$ |   S   |   G   |   A   |   F   |
| :-----: | :---: | :---: | :---: | :---: |
|   ch    |   T   |   T   |   F   |   T   |
|   fl    |   F   |   T   |   T   |   T   |
|   su    |   T   |   F   |   T   |   T   |
The French recipe.
### 3.10
The contrapositive of "if 3n is odd,then n is odd" is "if n isn't odd,then 3n isn't odd".To prove the original statement form,we only need to prove its contrapositive.Below is the proof.
Because n is an integer and n isn't odd,n must be even.Suppose n=2k($k\in Z$),so 3n=6k,it is obvious that 3n(6k) is divisible by 2,namely 3n is even.So "if n isn't odd,then 3n isn't odd" is proved.Thus,the original statement is proved to be true.
### 3.11
The contrapositive of the statement to be proved is "if $\sqrt[]{2x}$ is an integer,then x isn't odd".Now let's prove the contrapositive.
Since $\sqrt[]{2x}$ is an integer,we might as well suppose it as n($n\in Z$),so 2x=n^2^,namely x=${n^2}\over{2}$,apparently x is either even integer or a fraction,so the contrapositive proves true,namely the original statement proves true. 
### 4.1
**(a)** $\forall x,(\exists y,(x=2y))$
**(b)** $\forall y,(\exists x,(x=2y))$
**(c)** $\forall x,\forall y,(x=2y)$
**(d)** $\exists x,(\exists y,(x=2y))$
**(e)** $\exists x,\exists y,(x=2y)$
### 4.5
**(a)** There exists an $x\in R$,such that $x^2\leq 0.$
**(b)** There exists an odd integer such that it is zero.
**(c)** If I am hungry,then I won't eat chocolate.
**(d)** There exists a girl such that she likes every boy.
**(e)** For all $x\in R,$we have $g(x)\leq 0.$
**(f)** There exists an $x\in R$ such that $xy\neq 1$for all $y\in R.$
**(g)** For all $y\in R$ there is an $x\in R$ such that $xy\neq 0.$
**(h)** If $x\neq 0,$then for all $y\in R$,we have $xy\neq 1.$
**(i)** If $x>0,$then there exists a $y\in R$ such that $xy^2<0.$
**(j)** There exists an $\epsilon>0$ and an $n>N$ such that if $x$ is a real number with $|x-1|<\delta,$ then $|x^2-1|\geq\epsilon$ for all $\delta>0.$
**(k)** There exists a real number $M$ such that $|f(n)|\leq M$ for all real number $N.$
### 4.7
**(a)** $\exists x,((x\in Z\land(\forall y,(y\in Z\rightarrow x\neq 7y)))\land (\forall z,(z\in Z\rightarrow x\neq 2z))).$
**(b)** For all $x,$ if $x\in Z$ and for all $y\in Z$ we have $x\neq 7y,$then there exists an $z\in Z$ such that $x=2z.$
**(c)** The negation is true.For the original statement,considering that if $x=5,$ then for all $y\in Z$ we have $x\neq7y,$ but there doesn't exist a $z\in Z$ such that $5=2z,$ namely $x=2z,$ so the original statement is false.
### 4.9
If we put too much emphasis on some trivial details,it would be ridiculous.
### 4.13
**(a) true** If I love Bill,I must love Sam,since I don't love Sam,so I don't love Bill 
**(b) false** Even though Susie didn't go to the ball in the red dress,it doesn't mean that I didn't stay home. 
**(c) true** If $t$ is positive,then there exists a real number $m$ such that $m>t,$ since all the $m$ is less than $t,$ $t$ is not positive.
**(d) true** Since my name isn't Igor,then the first half of  the statement must be true.
**(e)false** Even though there is no blue house on the street,there still could be a black house on the street.
**(f) true** If $x>5,$ then $y\leq \frac15,$ since $y=1,$then $x\leq 5.$
**(g) false** Even if $n<M,$ there is still such possibility that $n^2>M^2.$
**(h) false** If $y>x$ and $y\leq 0,$ it is also true that $y\leq z.$
## Extra Problem
Does this way lead to you knights' village?