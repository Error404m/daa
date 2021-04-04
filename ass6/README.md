# Assignment-6

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
Find the count of different palindromic substrings in the given string.

---
## How to use code

```
#Download project
https://github.com/Error404m/daa.git
```
Project Initialize 
```
cd daa
cd ass6

```
---

Run the code
```
g++ Rec_src_code.cpp
g++ Dp_src_code.cpp

Follow the previous step by entering ./a.out
```
Input
```
A single line of input contains string.
```

Output
```
The count of number of different palindromic substring in the given string.

```
**Test case**
```
Test Case-1

Input:
acca 

Output:
6

#--------------------------#

Test Case-2
Input:
abccba

Output:
9
```

### Theory
In this paper, we have devised an efficient algorithm based on bottom-up approach of dynamic programming (algorithm 2 in the report) to find the count of different palindromic substrings in the input string.
We have also discussed the recursive approach of the problem as algorithm 1 in the report.

---

### Analysis

**Time Complexity**

Here, n = input string length

#Algorithm 1:
The time complexity of 1st algorithm is : O(n^3)

#Algorithm 2:
The worst case time complexity of 2nd algorithm is : O(n*n)

The best case time complexity will be : O(n*n)

The average case time complexity will be : O(n*n)

**Space Complexity**

#Algorithm 1:
The space complexity of 1st algorithm is : O(m)

#Algorithm 2:
The space complexity of 2nd algorithm is : O(n*n)

---

### Conclusion 

The algorithms discussed in this paper can be used to find the number of palindromic substrings. In the matter of comparison between these two algorithms,in Approach 1, time complexity i.e O(N^3) would be higher as compared to Algorithm 2 i.e (O(N^2)). So we can conclude that Dynamic Programming Solution i.e the Algorithm 2 is optimal and efficient.

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
