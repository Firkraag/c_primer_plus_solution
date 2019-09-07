# Problem
Define a structure template suitable for holding the following items: the name of an
automobile, its horsepower, its EPA city-driving MPG rating, its wheelbase, and its year.
Use car as the template tag
# Solution
```
struct car {
    char name[30];
    double horsepower;
    double mpg_rating;
    double wheelbase;
    int year;
}