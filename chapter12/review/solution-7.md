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
`main` in file 1,  `stem` and `root` in file2 know each variables.

But `petal` does not know `lily` declared in the function body.
