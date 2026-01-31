# Types of Recursion

Recursion can be categorized based on where the recursive call is placed and how the function executes.

## 1. Tail Recursion
A function is **Tail Recursive** if the recursive call is the last thing executed by the function. There is no pending computation after the call returns.
- **Benefit**: Compilers can optimize tail recursion into a loop (Tail Call Optimization - TCO), saving stack space.

```cpp
void print(int n) {
    if (n == 0) return;
    cout << n << " ";
    print(n - 1); // Tail recursion
}
```

## 2. Non-Tail (Head) Recursion
If the recursive call is not the last thing done, it is **Non-Tail**. Some computation is performed with the result of the recursive call.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1); // Not tail-recursive (multiplication happens after return)
}
```

## 3. Tree Recursion
Linear recursion makes one call. **Tree Recursion** makes two or more recursive calls within the same function execution. This leads to an exponential number of calls.

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2); // Tree recursion
}
```

## 4. Indirect Recursion
In **Indirect Recursion**, function `A` calls function `B`, and function `B` calls function `A` (possibly through a chain).

```cpp
void funcA(int n) {
    if (n > 0) {
        cout << n << " ";
        funcB(n - 1);
    }
}
void funcB(int n) {
    if (n > 1) {
        cout << n << " ";
        funcA(n / 2);
    }
}
```

## 5. Nested Recursion
In **Nested Recursion**, a recursive function is passed as a parameter to another recursive call of itself. (e.g., Ackerman Function).

```cpp
int fun(int n) {
    if (n > 100) return n - 10;
    return fun(fun(n + 11)); // Nested recursion
}
```
