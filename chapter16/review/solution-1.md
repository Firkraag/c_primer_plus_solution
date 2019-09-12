# Problem
Here are groups of one or more macros followed by a source code line that uses them.
What code results in each case? Is it valid code? (Assume C variables have been declared.)

a.

```
#define FPM 5280
dist = FPM * miles; /* feet per mile */
```

b.

```
#define FEET 4
#define POD FEET + FEET
plort = FEET * POD;
```

c.

```
#define SIX = 6;
nex = SIX;
```

d.

```
#define NEW(X) X + 5
y = NEW(y);
berg = NEW(berg) * lob;
est = NEW(berg) / NEW(y);
nilp = lob * NEW(-berg);
```

# Solution
a.
```
dist = 5280 * miles;
```
valid


b.
```
plort = 4 * 4 + 4;
```
valid

c.
```
nex = = 6;
```
invalid 

d.
```
y = y + 5;
berg = berg + 5 * lob;
est = berg + 5 / y + 5;
nilp = lob * -berg + 5;
```
valid

