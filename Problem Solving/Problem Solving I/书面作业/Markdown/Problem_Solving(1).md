# Homework
## Problems in UD
### 1.2
 **Answer** :I
**Understanding the problem** : By reading the problem,we can learn that it requires us to find a word that is both horizontal symmetric and central symmetric.
**Devising a plan** :It is easy to know that a word that is a horizontal symmetric arrangement of such letters must be a solution,so we can pick out the letters like I,O and H.
**Carrying out the plan** :Try to use these letters to make a word that fit the question,like "I".
**Looking back** :Check our answer,obviously that "I" perfectly meets the question,so it's the right answer!
### 1.3
**Answer** :
(a)Vancouver
(b)Pennsylvania
(c)failed to find the answer
(d)dormitory
### 1.4
**Answer** :n-1
**Understanding the problem** :From the question we can learn that the format of the tournament is elimination and there are n teams,the problem is to find how many games are played.
**Devising a plan** :In an elimination tourament,each time a game ends,one team will be eliminated,so the *number of games to be played* equals to the *nember of teams to be eliminated*.
**Carrying out the plan** :Since there are n teams initially and there will be only one team left to be the champion,the *number of teams to be eliminated* is n-1,namely the *number of games to be played* is n-1.
**Looking back** :No matter the number n is even or odd,the *number of teams to be eliminated* would always be n-1,so the answer is right!
### 1.5
**Answer** :Equally
**The process** :
$$P(first\quad time)=\frac17$$
$$P(third\quad time)=\frac67 *\frac56 *\frac15=\frac17$$
### 1.6
**Answer** :Coding theory is fun,we will learn more about it later.
**Understanding the problem** :The problem gives us a string of letters and tells us it uses a shifted alphabet,so the key to the question is to find the *n*.
**Devising a plan** :First of all,we can analyze the repetitive letters,guess their possible "meaning",then examine our conjecture by writing down all the letters.
**Carrying out the plan** :It is easily noticed that there are a string of "AAA",considering that it is not very possible for one letter to appear in a word for 3 times in a row,we can infer that "A" stands for a letter that could appear at both the beginning and the end of a word,especially appears repetitively in the end.Thus we can guess that "A" stands for "S“ or "L".Then we can make sure that "A" stands for "L" after writing down the other letters!
**Look back** :The sentence do make sense,so the answer is clear!
### 1.8
**Answer** :3
**The process** :
1. Number the coins from 1 to 12.
2. Conduct the first trial:weigh 1,2,3,4 against 5,6,7,8.
3. If the scale balances in the first trial,which means that the counterfeit is among 9,10,11,12,then weigh 1,9,10,11 against 5,6,7,8,if the scale balances,we find 12 as the different;if not,we can know whether the counterfeit is heavier or not and it's among 9,10,11,then we can find it within one another trial!
4. If the scale doesn't balance in the first trial,which means the counterfeit is among 1,2,3,4,5,6,7,8,then conduct the second trial by weighing 1,2,9,10 against 3,4,7,11.
5. IF the scale balances in the second trial,which means the counterfeit is among 5,6,8,and we can infer the counterfeit is heavier or not.Then weigh 1,2,3,5 against 4,6,11,12,if the scale balances,the couterfeit is 8;if not,we can see whether 5 or 6 is counterfeit by observing the scale.
6. If the scale doesn't balnce in the second trial:If the scale inclines to the same side,the couterfeit is among the coins didn't shift(1,2,7),and now we know whether the couterfeit is heavier or not,weigh 1,2 against 7,12,you'll find the couterfeit.If the scale inclines to a different side,the couterfeit is among the coins shifted(3,4),repeat as above and you'll find the couterfeit among 3 and 4.
7. As is put above,the samllest number is 3.
## Problems in Class
### 1
**We might as well set a~i~,b~i~ as the addends in the i~th~ digit,c~i~ as the sum in the i~th~ digit and d~i~ as the carry in the i~th~ digit.Now  we can do addition with them as below shows.(i>0,i could be any natural numbers)**
*zero c~i~；*
*zero d~i~；*
*test a~i~  flip c~i~；*
*test b~i~  flip c~i~；*
*test b~i~  flip d~i~；*
*test d~i-1~ flip c~i~；*
*test d~i-1~ flip d~i~；* 
**Obviously that if we connect all the c~i~ together,we can get the output.Like what below shows:**
***c~n~c~n-1~c~n-2~...c~2~c~1~***
### 2
**Answer** :6
**The process** :
1. Let's name the buckets of 8L,5L,3L after A,B,C.
2. Pour the oil in A into B till B is full.
3. Pour the oil in B into C till C is full.
4. Pour the oil in C into A till C is empty.
5. Pour the oil in B into C till B is empty.
6. Pour the oil in A into B till B is full.
7. Pour the oil in B into C till C is full.Now there are only 4 liters of oil left in B.
![](../pics/1.png)