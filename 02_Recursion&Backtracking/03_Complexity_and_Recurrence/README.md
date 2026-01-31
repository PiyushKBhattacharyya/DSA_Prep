# Complexity and Recurrence Relations

Analyzing the complexity of recursive algorithms requires solving **Recurrence Relations**.

## 1. Recurrence Relations
A recurrence relation is an equation that defines a sequence based on a rule that gives the next term as a function of the previous term(s).

### Examples
- **Factorial**: $T(n) = T(n-1) + O(1) \implies O(n)$
- **Binary Search**: $T(n) = T(n/2) + O(1) \implies O(\log n)$
- **Merge Sort**: $T(n) = 2T(n/2) + O(n) \implies O(n \log n)$
- **Fibonacci**: $T(n) = T(n-1) + T(n-2) + O(1) \implies O(2^n)$

## 2. Solving Recurrence Relations

### A. Substitution Method
Guess the form of the solution and use mathematical induction to prove it.

### B. Recursion Tree Method
Draw a tree where each node represents the cost of a single subproblem. Sum the costs of all levels to find the total complexity.

### C. Master Theorem
A template for solving recurrences of the form:
$$T(n) = aT(n/b) + f(n)$$
where $a \ge 1$ and $b > 1$.

- If $f(n) = O(n^c)$ where $c < \log_b a$, then $T(n) = \Theta(n^{\log_b a})$.
- If $f(n) = \Theta(n^c)$ where $c = \log_b a$, then $T(n) = \Theta(n^c \log n)$.
- If $f(n) = \Omega(n^c)$ where $c > \log_b a$, then $T(n) = \Theta(f(n))$.

## 3. Space Complexity
Recursive algorithms use memory on the **call stack**.
- **Space Complexity** = $O(\text{Maximum Stack Depth})$.
- For a balanced recursion tree (like Merge Sort), the depth is $\log n$.
- For a skewed tree (like Factorial), the depth is $n$.

> [!CAUTION]
> Excessive recursion depth can lead to **Stack Overflow** errors even if the time complexity is low.
