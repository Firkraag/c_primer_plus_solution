# Problem
Given that value is an `int`, what output would the following loop produce?

     for ( value = 36; value > 0; value /= 2)
         printf("%3d", value);
What problems would there be if value were double instead of int ? 

# Solution
     36 18  9  4  2  1

If value were double instead of int, then the test remains true even when `value` becomes less than 1, the loop continues until `value` underflow and yielded a value of 0.