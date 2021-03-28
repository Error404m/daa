# Assignment-5

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019237  |   Ishneet Sethi | ishneet890 |
|    IIT2019238  |   Chandramani Kumar | hackifme1 | 
|    IIT2019239  |   Mrityunjaya Tiwari | Error404m  |

**Group No-**"18"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Find the maximum amount of gold collected  by a miner while starting from any cell of the first column traversing a matrix of N X M size whose each cell contains the amount of gold.

---
## How to use code
A quick and simplified answer is that Lorem Ipsum refers to text that the DTP (Desktop Publishing) industry use as replacement text when the real text is not available. ... Lorem Ipsum is dummy text which has no meaning however looks very similar to real text.
```
#Download project
https://github.com/Error404m/daa.git
```
Project Initialize 
```
cd daa
cd ass2

```
---

Run the code
```
g++ rec_src_code.cpp
g++ dp_src_code.cpp

Follow the previous step by entering ./a.out
```
Input
```
A single line of input contains two space separated integers N and M.
```

Output
```
The maximum amount of gold that can be collected 
---

**Test case**
Though input in our code asks only for rows and columns of the matrix, we are illustrating in test cases with matrix input as well for the sake of understanding.
```
Test Case-1
Input:
3 3
4 5 6
7 10 20 
10 20 12 

Output:
50
#--------------------------#
Test Case-2
Input:
4 4
1 3 1 5
2 2 4 1
5 0 2 3
0 6 1 2
Output:
16
```

---

### Theory
In this paper, we have devised an efficient algorithm based on bottom-up approach of dynamic programming (algorithm 2 in the report) to find the maximum amount of gold collected  by a miner while starting from any cell of the first column and traversing a matrix of N X M size whose each cell contains the amount of gold.
We have also discussed the recursive approach of the problem as algorithm 1 in the report.

---

### Analysis

**Time Complexity**
#Algorithm 1:
The time complexity of 1st algorithm is : O(n*3^(m-1))

#Algorithm 2:
The worst case time complexity of 2nd algorithm is : O(m*n)
Tthe best case time complexity will be : O(n)

**Space Complexity**

#Algorithm 1:
The space complexity of 1st algorithm is : O(m)

#Algorithm 2:
The space complexity of 2nd algorithm is : O(m*n)

---
Conclusion
The algorithms discussed in this paper can be used to find the maximum amount of gold collected by a miner while starting from any cell of the first column traversing a matrix of N X M size whose each cell contains the amount of gold.In the matter of comparison between these two algorithms both approaches had the same space complexity. But, in Approach 1, time complexity would be higher as compared to Algorithm 2. So we can conclude that Dynamic Programming Solution i.e the Algorithm 2 is optimal and efficient.

### References

References include following :
[ 1 ]
https://en.wikipedia.org/wiki/Dynamic_programming

[ 2 ]
https://www.geeksforgeeks.org/tabulation-vs-memoization/
	
[ 3 ]    
https://www.ideserve.co.in/learn/time-and-space-complexity-of-recursive-algorithms

[ 4 ]
https://www.geeksforgeeks.org/auxiliary-space-recursive-functions/
