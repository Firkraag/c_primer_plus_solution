# Problem
a. The Tinkerbell computer has a hardware byte that can be read into a program. This byte contains the following information:

Bit(s) Meaning

0–1 Number of 1.4MB floppy drives 

2 Not used

3–4 Number of CD-ROM drives

5 Not used

6–7 Number of hard drives

Like the IBM PC, the Tinkerbell fills in structure bit fields from right to left. Create a bit-field template suitable for holding the information.

b. The Klinkerbell, a near Tinkerbell clone, fills in structures from left to right. Create the corresponding bit-field template for the Klinkerbell.
# Solution
a.

```
struct hardware {
    unsigned int number_of_floppy       : 2;
    unsigned int                        : 1;
    unsigned int number_of_cd           : 2;
    unisgned int                        : 1;
    unsigned int number_Of_hard         : 2;
}
```

b.

```
struct hardware {
    unsigned int number_Of_hard         : 2;
    unisgned int                        : 1;
    unsigned int number_of_cd           : 2;
    unsigned int                        : 1;
    unsigned int number_of_floppy       : 2;
}
```
