# Problem
Create a macro using a generic selection expression that evaluates to the string
"boolean" if the macro argument is type _Bool , and evaluates to "not boolean"
otherwise
# Solution
`#define IS_BOOLEAN(S) _Generic((S), bool: "boolean", default: "not boolean")`