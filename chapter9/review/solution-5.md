# Problem
What changes, if any, would you need to make to have the function of question 4 add two `double` numbers instead?
# Solution
```
long double sum(double x, double y)
{
    return (long double) x + (long double) y;
}
```