# Problem
Show a code fragment that prints out the date of preprocessing if the macro PR_DATE is
defined.
# Solution
```
#ifdef PR_DATE
    printf("Date = %s\n", __DATE__)
#endif
```