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
`daisy` is known to all functions

`lily` defined in the body of `main` is known only to `main`

The declaration of `lily` is an error because there is no external `lily` definiton in both files

`lily` defined as `static` in file2 is known to `root` and `stem`

`rose` defined outside functions is known to `root`,
but is overridden by local `rose` in function `stem`
