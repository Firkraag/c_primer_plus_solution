# Problem
Define a macro function that prints the representations and the values of two integer
expressions. For example, it might print
3+4 is 7 and 4*12 is 48
if its arguments are 3+4 and 4*12 .
# Solution
`#define PR_VAL(EXP1, EXP2) printf(#EXP1 " is %d and " #EXP2 " is %d\n", EXP1, EXP2)`