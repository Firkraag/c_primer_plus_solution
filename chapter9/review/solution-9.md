# Problem
Given the following output:
<p>
Please choose one of the following:<br> 
1) copy files   2) move files <br>
3) remove files 4) quit <br>
Enter the number of your choice:
<p>

a. Write a function that displays a menu of four numbered choices and asks you to choose one. (The output should look like the preceding.)

b. Write a function that has two `int` arguments: a lower limit and an upper limit. The function should read an integer from input. If the integer is outside the limits, the function should print a menu again (using the function from part “a” of this question) to reprompt the user and then get a new value. When an integer in
the proper limits is entered, the function should return that value to the calling function. Entering a noninteger should cause the function to return the quit value of 4.

c. Write a minimal program using the functions from parts “a” and “b” of this question. By minimal, we mean it need not actually perform the actions promised by the menu; it should just show the choices and get a valid response.

# Solution
a. 
```
void display_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files 2) move files\n");
    printf("3) remove files 4) quit\n");
    printf("Enter the number of your choice:");
}
```
b.

```
int read_int_between_limits(int lower_limit, int upper_limit)
{
    int number;
    while (scanf("%d", &number) == 1)
    {
        if (number < lower_limit || number > upper_limit)
        {
            display_menu();
        }
        else
        {
            return number;
        }
    }
    return 4;
}
```

c.
```
int main(void)
{
    display_menu();
    while (1)
    {
        int choice = read_int_between_limits(1, 4);
        switch (choice)
        {
            case 1:
                ;
            case 2:
                ;
            case 3:
                ;
            case 4:
                ;
            case default:
                ;
        }
        display_menu();
    }
}
```