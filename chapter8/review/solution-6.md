# Problem
What is the output of each of the following fragments for the indicated input (assume
that `ch` is type `int` and that the input is buffered)? 

a. The input is as follows:

`If you quit, I will.[enter]`

The fragment is as follows:

    while ((ch = getchar()) != 'i') 
        putchar(ch);

b. The input is as follows: 

`Harhar[enter]`

The fragment is as follows:

    while ((ch = getchar()) != '\n')
    {
        putchar(ch++); 
        putchar(++ch);
    }

# Solution
a. `If you qu`

b. `HJacrthjacrt`