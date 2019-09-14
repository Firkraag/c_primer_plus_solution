# Problem
The discussion of inline functions shows three different versions of a square() function.
How do the three differ from one another in terms of behavior?
# Solution
- The first version returns `x * x` of type `double`.
- The second version calculates `x * x`, then truncates it to `int`, then promotes the result to `double` since the return type is `double`.
- The third version calculates `x * x + 0.5` of type `double`, then truncates it to `int`, then promotes the result to `double` since the return type is `double`. Adding `0.5` to `x * x` and truncating the result rounds `x * x` to nearest integer.