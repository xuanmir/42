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
return (pointer_name);
/*
returns the address inside of the pointer
*/
```
```c
return (*pointer_name);
/*
returns the value at the address inside of the pointer
*/
```
```c
return (&pointer_name);
/*
returns the address of the pointer
*/
```

---
### Pointer dereferencing
Dereference: access, execute, expand, interpret, unwrap, etc.

https://en.wikipedia.org/wiki/Dereference_operator

https://riptutorial.com/c/example/4724/dereferencing-a-pointer

https://bytes.com/topic/c/answers/594812-printing-integer-variable-using-putchar

https://wuhrr.wordpress.com/2007/11/09/how-to-print-a-long-integer-using-only-putchar

https://www.log2base2.com/c-examples/loop/split-a-number-into-digits-in-c.html

https://leetcode.com/problems/the-skyline-problem

https://www.programmersought.com/article/92395576179

https://radicle.network

https://twitter.com/TaschaLabs/status/1561790405263273984

https://twitter.com/BitMEXResearch/status/1560604363281686528
