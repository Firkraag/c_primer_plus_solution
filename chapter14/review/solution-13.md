# Problem
Declare four functions and initialize an array of pointers to point to them. Each function
should take two `double` arguments and return a `double` . Also, show two ways using the
array to invoke the second function with arguments of 10.0 and 2.5. 
# Solution
```
double add(double, double);
double substract(double, double);
double multiply(double, double);
double divide(double, double);
typdef double (*D_FP_DP)(double, double);
D_FP_DP array[4] = {add, substract, multiply, divide};
array[1](10.0, 2.5);
(*array[1])(10.0, 2.5);
```
