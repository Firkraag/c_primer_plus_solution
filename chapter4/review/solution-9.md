# Problem
For each of the following input lines, provide a `scanf()` statement to read it. Also
declare any variables or arrays used in the statement. a. 101
b. 22.32 8.34E−09
c. linguini
d. catch 22
e. catch 22 (but skip over catch)

# Solution
a. `scanf("%d", &a);`
b. `scanf("%f %e", &a, &b);`
c. `scanf("%s", array);`
d. `scanf("%s %d", array, &i);`
e. `scanf("%*s %d", &i);`

