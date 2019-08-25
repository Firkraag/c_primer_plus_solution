# Problem
What’s wrong with this attempted declaration of a character string?
```
int main(void) {
    char name[] = {'F', 'e', 's', 's' };
}
```
# Solution
have no terminating '\0' character.
