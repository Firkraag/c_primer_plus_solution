# Problem
a. Given the following typedef , declare a 10-element array of the indicated
structure. Then, using individual member assignment (or the string equivalent), let
the third element describe a Remarkatar lens with a focal length of 500 mm and an
aperture of f/2.0.

```
typedef struct lens { /* lens descriptor */
    float foclen; /* focal length,mm */ 
    float fstop; /* aperture */
    char brand[30]; /* brand name */
} LENS;
```


b. Repeat part a., but use an initialization list with a designated initializer in the
declaration rather than using separate assignment statements for each member.
# Solution
a.

```
LENS lens_array[10];
strcpy(lens_array[2].brand, "Remarkatar");
lens_array[2].foclen = 500;
lens_array[2].fstop = 2.0;
```

b.

```
LENS lens_array[10] = {[2] = {.foclen = 500, .fstop = 2.0, .brand = "Remarkatar"}};
```

