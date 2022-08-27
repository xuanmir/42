# rush_02

## Args

Do we have 2 arguments?
```
<yes>
	ft_input(argv[1], argv[2]);
<no>
	ft_input(numbers.dict, argv[1]);
```

---
## Additional entries

Remember we only need to use the initial entries!
```c
54: hello, this is a trap ;)
```
The value assigned to `[54]` doesn't matter,
because you're supposed to replace it by the values in `[50]` and `[4]`.

Therefore...
It they give us extra keys,
we must ignore the values they contain,
and just map the key name to the original set of keys.
```c
54: hello, this is a trap ;) // ignore value
-->
54: show(50, " ", 4);
```

---
## Leading 1

Do we need to add `"one"` at the beginning of `"hundred"`, `"thousand"`, `"million"`, etc ?

```c
100: Is there another trap here?
1000: And here?
1000000: Etc?
```
```c
100: hundred \\ Error?
-->
100: one hundred \\ show(1, " ", 100);

1000: thousand \\ Error?
-->
1000: one thousand \\ show(1, " ", 1000);

10000: ten thousand \\ Ok
-->
10000: ten thousand \\ Ok

100000: hundred thousand \\ Error?
-->
100000: one hundred thousand \\ show(1, " ", 100000);

1000000: million \\ Error?
-->
1000000: one million \\ show(1, " ", 1000000);

10000000: ten million \\ Ok
-->
10000000: ten million \\ Ok

100000000: hundred million \\ Error?
-->
100000000: one hundred million \\ show(1, " ", 100000000);

1000000000: billion \\ Error?
-->
1000000000: one billion \\ show(1, " ", 1000000000);
```
