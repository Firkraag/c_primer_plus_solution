# Problem
In question 1, `ref` is the address of what? What about `ref + 1`? What does `++ref` point to?
# Solution
`ref` is the address of array and first element of array.

`ref + 1` is the address of second element of array.

`++ref` is not a valid C expression, because ref is a constant, not a variable.