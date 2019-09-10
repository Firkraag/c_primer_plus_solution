# Problem
`putchar(getchar())` is a valid expression; what does it do? Is `getchar(putchar())` also valid?

# Solution
`putchar(getchar())` reads the next character from `stdin` then outputs the character to `stdout`

`getchar(putchar())` is not valid since `getchar` accepts no arguments and `putchar` accepts one argument.