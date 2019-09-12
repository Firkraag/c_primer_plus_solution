# Problem
In Listing 15.2, you can replace
```
while (bits-- > 0) 
{
    mask |= bitval;
    bitval <<= 1;
}
```
with
```
while (bits-- > 0) 
{
    mask += bitval;
    bitval *= 2; 
}
```
and the program still works. Does this mean the operation *= 2 is equivalent to <<= 1? What about |= and +=?

# Solution

For unsigned data, `*= 2` is equivalent to `<<= 1`; but for signed data, shifting an negative signed value is undefined behavior.

`|=` is not equivalent to `+=`

