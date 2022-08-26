# Pointers

## C Piscine C 01

#### [Subject EN](https://cdn.intra.42.fr/pdf/pdf/58307/en.subject.pdf) | [Subject FR](https://cdn.intra.42.fr/pdf/pdf/58308/fr.subject.pdf)
#### [Videos YouTube](https://www.youtube.com/playlist?list=PLVQYiy6xNUxytsXWxZx6odBJMbRktIHTs) | [Videos Intra](https://elearning.intra.42.fr/notions/c-piscine-c-01/subnotions)

---
### Variable declaration
`[type_int] [variable_name]`
```c
int variable_name;
```

---
### Pointer declaration
`[type_int] [type_pointer] [pointer_name]`
```c
int *pointer_name;
```
```c
int* pointer_name;
```

---
### Pointer of pointer declaration
`[type_int] [type_pointer] [type_pointer] [pointer_name]`
```c
int **pointer_name;
```
```c
int** pointer_name;
```

---
### Variable referencing
`[pointer_name] = [address_of] [variable_name]`
`[pointer_name] = [reference_to] [variable_name]`
```c
pointer_name = &variable_name;
a_ptr = &a;
```

---
### Pointer referencing
`[pointer_name] = [address_of] [pointer_name]`
`[pointer_name] = [reference_to] [pointer_name]`
```c
pointer_name = &pointer_name;
ptr = &ptr; ????
```

---
```c
return (variable_name);
/*
Returns the value stored in [variable_name].
*/
```
```c
return (pointer_name);
/*
Returns the value stored in [pointer_name].
However, since [pointer_name] is a pointer,
the value will be an address to another [something_name]
therefore…
Returns the address stored in [pointer_name].
*/
```
```c
return (*pointer_name);
/*
Returns the value found at the address stored in [pointer_name].
*/
```
```c
return (&pointer_name);
/*
Returns the address of [pointer_name].
*/
```

---
### Pointer dereferencing
Dereference: access, execute, expand, interpret, unwrap, etc.

---
https://en.wikipedia.org/wiki/Dereference_operator

https://riptutorial.com/c/example/4724/dereferencing-a-pointer

https://bytes.com/topic/c/answers/594812-printing-integer-variable-using-putchar

https://wuhrr.wordpress.com/2007/11/09/how-to-print-a-long-integer-using-only-putchar

https://www.log2base2.com/c-examples/loop/split-a-number-into-digits-in-c.html

https://riptutorial.com/c

https://riptutorial.com/c/topic/6846/-ctype-h----character-classification---conversion

https://riptutorial.com/c/topic/1301/aliasing-and-effective-type

https://riptutorial.com/c/topic/322/arrays

https://riptutorial.com/c/topic/10543/common-c-programming-idioms-and-developer-practices

https://riptutorial.com/c/topic/2006/common-pitfalls

https://riptutorial.com/c/topic/250/function-pointers

https://riptutorial.com/c/topic/2529/implicit-and-explicit-conversions

https://riptutorial.com/c/topic/4547/initialization

https://riptutorial.com/c/topic/560/linked-lists

https://riptutorial.com/c/topic/3455/literals-for-numbers--characters-and-strings

https://riptutorial.com/c/topic/1108/pointers

https://riptutorial.com/c/topic/1990/strings
