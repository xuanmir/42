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
100: hundred // Error?
-->
100: one hundred // show(1, " ", 100);
||
100: one hundred // 00: hundred; show(1, " ", 00); ????
200: two hundred // 00: hundred; show(2, " ", 00); ????
```
```c
1000: thousand // Error?
-->
1000: one thousand // show(1, " ", 1000);
||
1000: one thousand // 000: thousand; show(1, " ", 000); ????
```
```c
10000: ten thousand // Ok
-->
10000: ten thousand // show(10, " ", 1000); ????
||
10000: ten thousand // 000: thousand; show(10, " ", 000); ????
```
```c
100000: hundred thousand // Error?
-->
100000: one hundred thousand // show(1, " ", 100000);
||
100000: one hundred thousand // 00: hundred; 000: thousand; show(1, " ", 00, " ", 000); ????
```
```c
1000000: million // Error?
-->
1000000: one million // show(1, " ", 1000000);
```
```c
10000000: ten million // Ok
-->
10000000: ten million // Ok
```
```c
100000000: hundred million // Error?
-->
100000000: one hundred million // show(1, " ", 100000000);
```
```c
1000000000: billion // Error?
-->
1000000000: one billion // show(1, " ", 1000000000);
```

---
## Parsing

```c
if ((input > 1000) && (input < 1000000))
	show((input / 1000), " ", 1000);

/*
10000 --> show(10, " ", 1000);
100000 --> show(100, " ", 1000);
*/
```
```c
999999999: nine hundred ninety nine million nine hundred ninety nine thousand nine hundred ninety nine

if ((input > 1000000) && (input < 1000000000))
{
	if ((input > 1000) && (input < 1000000))
	{
		if ((input > 100) && (input < 1000))
		{
			show
		}
		show
	}
	show
}
```
