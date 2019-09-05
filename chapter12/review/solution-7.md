# Problem
Which functions know each variable in the following? Are there any errors?
```
/* file 1 */ 
int daisy; 
int main(void) {
    int lily;
    ...; 
}
int petal() {
    extern int daisy, lily;
    ...; 
}
/* file 2 */ 
extern int daisy; 
static int lily; 
int rose;
int stem()
{
    int rose;
    ...; 
}
void root() 
{
    ...; 
}
```
# Solution
`main` knows `daisy` and `lily` defined locally. 
`stem` knows `rose` defined locally and `lily` defined globally and `daisy` defined in file1.
`root` knows `rose` and `lily` defined globally and `daisy` defined in file`.
`petal` knows `daisy` defined globally. But `petal` does not know `lily` declared in the function body since `lily` in file 2 has internal linkage.
