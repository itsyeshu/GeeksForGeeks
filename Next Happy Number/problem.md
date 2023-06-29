# Maximum Depth Of Binary Tree

>**Note :**
>1. This problem can be found at [GeeksForGeeks ⧉](https://practice.geeksforgeeks.org/problems/next-happy-number4538/1/)
>2. This problem is the *Problem Of The Day* for `29 June 2023`

<!-- Badges -->

![GeeksForGeeks hard level problem](https://img.shields.io/badge/Hard-ff375f?logo=geeksforgeeks&labelColor=fff) ![POTD](https://img.shields.io/badge/POTD-29_Jun_2023-dfdfdf)
^Topics:^ ![Recursion](https://img.shields.io/badge/Recursion-dfdfdf) ![Algorithm](https://img.shields.io/badge/Algorithm-dfdfdf)

## Question statement

For a given non-negative integer `N`, find the next smallest Happy Number. A number is called Happy if it leads to `1` after a sequence of steps. Wherein at each step the number is replaced by the *sum of squares of its digits* that is, if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach `1` at some point.

## Example:
```
Input:
N = 8
Output:
10
Explanation:
Next happy number after 8 is 10 since
1*1 + 0*0 = 1
```

**Your Task:**
You don't need to read input or print anything. Your task is to complete the function `nextHappy()` which takes an integer `N` as input parameters and returns an integer, next Happy number after `N`.
 
**Constraints:**
* `1 ≤ N ≤ 10⁵`
* *Expected Time Complexity* : O(Nlog₁₀N)
* *Expected Auxiliary Space* : O(N)
