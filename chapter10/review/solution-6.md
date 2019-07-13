# Problem
Suppose you have the following declaration: 

`int grid[30][100];`.

a. Express the address of `grid[22][56]` one way.

b. Express the address of `grid[22][0]` two ways.

c. Express the address of `grid[0][0]` three ways.

# Solution

a. 

`&grid[22][56]`

b.

`&grid[22][0]`

`grid[22]`

c.

`&grid[0][0]`

`grid[0]`

`(int *) grid`