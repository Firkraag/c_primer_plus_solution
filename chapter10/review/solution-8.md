# Problem
a. Declare an array of six `ints` and initialize it to the values 1, 2, 4, 8, 16, and 32.

b. Use array notation to represent the third element (the one with the value 4) of the
array in part a.

c. Assuming C99/C11 rules are in effect, declare an array of 100 `ints` and initialize it
so that the last element is -1; don’t worry about the other elements.

d. Assuming C99/C11 rules are in effect, declare an array of 100 ints and initialize it so that elements 5, 10, 11, 12, and 3 are 101; don’t worry about the other elements.
# Solution
a.
`int numbers[6] = {1, 2, 4, 8, 16, 32}`

b.
`numbers[2]`

c.
`int arrays[100] = {[99] = -1}`

d.
`int arrays[100] = {[2] = 101, [4] = 101, [9] = 101, 101, 101}`
