# Problem
Suppose `data1` is an array of 100 `double` values and `data2` is an array of 300 `double` values.

a. Write a `memcpy()` function call that copies the first 100 elements of `data2` to
`data1` .

b. Write a `memcpy()` function call that copies the last 100 elements of `data2` to
`data1` .
# Solution
a.
`memcpy(data1, data2, sizeof(double) * 100)`

b.
`memcpy(data1, data2 + 200, sizeof(double) * 100)`
