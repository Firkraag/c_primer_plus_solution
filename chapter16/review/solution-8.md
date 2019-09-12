#Problem
Suppose you have a block of code you want to skip over temporarily while testing a
program. How can you do so without actually removing the code from the file?
#Solution
```
#ifdef 0
CODE BLOCK
#endif
```