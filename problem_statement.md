

This question is a variation of the classic Josephus problem. <br/>
Given two numbers _n_ and _k_, consider a game where there are _n_ people standing in a circle numbered from 1 to n. <br/>
Every player whose number is not a prime has zero lives initially, while those whose number is a prime have one live initially. Any player will be removed from the circle if the number of their lives during the game _<0_. <br/>
An additional rule is that when a player whose number is a prime is removed from the game, the players directly adjacent to that player receive an additional life. 
The game proceeds as follows - starting from the person numbered _k_ (or _k%n_ if _k > n_(_0_ will correspond to the _nth_ number)) every _kth_ person will lose a life until there is only person left. That player(number) will be declared winner. <br/>
Now given a pair of integers n and k, you have to print out the order in which the players are removed from the game. <br/>

**Input**
First line is _t_ which denotes the number of test cases.
Each test case consists of a single line, integers _n_ and _k_

**Constraints**
_t_ <= 10
_2<=n,k<=10^3_
 
 **Output**
 The numbers of the players being removed one after the other in a new line

**Example** <br/>
_Input_  <br/>
1
25 2

_Output_ <br/>
4
6
8
10
12
14
16
18
20
22
24
15
1
3
7
11
21
19
25
13
23
5
17
9
2
