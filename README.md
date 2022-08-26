# 42 Journey

### Things to clarify before the next exam
- Conversions between char and int.
- Declaration and assignation of character strings and integer arrays on separate lines.
- Global, static, constant (???).

### The Norm says
- Each C keyword must be followed by a space, except for keywords for types (such as int, char, float, etc.), as well as sizeof.
- Declaration and an initialisation cannot be on the same line, except for global variables (when allowed), static variables, and constants.
- Multiple assignments are strictly forbidden.
- You may add a new line after an instruction or control structure, but you’ll have to add an indentation with brackets or assignment operator. Operators must be at the beginning of a line.
- Control structures (if, while..) must have braces, unless they contain a single line or a single condition.
- A function can take 4 named parameters maximum.
- You can’t declare more than 5 variables per function.
- You cannot include a .c file.
- You cannot have more than 5 function-definitions in a .c file.

---
### Characters

---
### Integers

---
### Pointers

---
### Character Strings

```c
array[index] == *(array + index)
```
```c
char  array[3];

array[0] = 'a';
array[1] = 'b';
array[2] = 'c';
```
```c
// Unfortunately, this is not allowed by the Norm.
char  array[] = "Abc";
```
---
### Integer Arrays

```c
array[index] == *(array + index)
```
```c
int array[3];

array[0] = 1;
array[1] = 2;
array[2] = 3;
```
```c
// Unfortunately, this is not allowed by the Norm.
int array[] = {1, 2, 3};
```
---
### Recursion

---
### Main Arguments

---
### Split

---
### Malloc
