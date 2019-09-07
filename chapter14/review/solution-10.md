# Problem
Suppose you have this structure:
```
struct gas {
    float distance;
    float gals;
    float mpg;
};
```

a. Devise a function that takes a `struct gas` argument. Assume that the passed
structure contains the `distance` and `gals` information. Have the function
calculate the correct value for the `mpg` member and return the now completed
structure.

b. Devise a function that takes the address of a `struct gas` argument. Assume
that the passed structure contains the `distance` and `gals` information. Have
the function calculate the correct value for the `mpg` member and assign it to the
appropriate member.
# Solution
a.

```
struct gas calculate_mpg(struct gas gas)
{
    gas.mpg = gas.distance / gas.gals;
    return gas;
}
```

b.

```
void calculate_mpg(struct gas *ptr)
{
    gas->mpg = gas->distance / gas->gals;

}
```
