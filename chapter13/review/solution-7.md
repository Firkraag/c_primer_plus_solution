# Problem
a. What is the difference between saving `8238201` by using `fprintf()` and saving it by using `fwrite()`?

b. What is the difference between saving the character `S` by using `putc()` and saving it by using `fwrite()`?

# Solution
a. `fprintf()` will store seven characters in file: 8, 2, 3, 8, 2, 0, 1. `fwrite()` will store binary representation of integer `8238201` in file.

b. No difference. Both will store character `S` in file. 