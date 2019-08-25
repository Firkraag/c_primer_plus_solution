# Problem
Assume this declaration:

`char sign = '$';`

How many bytes of memory does `sign` use? What about `'$'`? What about `"$"`?

# Solution
`sign` and `'$'` use one byte, and `"$"` uses two bytes, including null terminator.