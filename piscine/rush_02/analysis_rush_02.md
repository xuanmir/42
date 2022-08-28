# rush_02

## Args

Do we have 2 arguments?
```c
<yes>
	ft_input(argv[1], argv[2]);
<no>
	ft_input(numbers.dict, argv[1]);
```

Is the argument valid?

```c
UINT_MIN = 0;
UINT_MAX = 4294967295;
/*
"four billion two hundred ninety four million nine hundred sixty seven thousand two hundred ninety five"
*/
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
54: hello, this is a trap ;)	// ignore this value
-->
54: show(50, " ", 4);			// fifty four
```

---
## Leading 1

Do we need to add `"one"` at the beginning of `"hundred"`, `"thousand"`,
	`"million"`, `"billion"`, etc ?

```c
100: Is there another trap here?
1000: And here?
1000000: Etc?
1000000000: Etc?
```
```c
100 --> 1_00 --> show(1, " ", _00); 						// one hundred
1000 --> 1_000 --> show(1, " ", _000);						// one thousand
10000 --> 10_000 --> show(10, " ", _000);					// ten thousand
100000 --> 100_000 --> show(100, " ", _000);				// one hundred thousand
1000000 --> 1_000000 --> show(1, " ", _000000);				// one million
10000000 --> 10_000000 --> show(10, " ", _000000);			// ten million
100000000 --> 100_000000 --> show(100, " ", _000000);		// one hundred million
1000000000 --> 1_000000000 --> show(1, " ", _000000000);	// one billion

100 --> 1_00 --> printf("%s %s", *1, *_00); 				// one hundred
```
```c
100: hundred						// Error?
-->
_00: hundred
1_00: one hundred
show(1, " ", _00);					// one hundred
printf("%s %s", *1, *_00);			// one hundred
```
```c
1000: thousand						// Error?
-->
_000: thousand
1_000: one thousand					// 000: thousand; show(1, " ", 000); ????
```
```c
10000: ten thousand					// Ok
-->
_000: thousand
10_000: ten thousand				// 000: thousand; show(10, " ", 000); ????
```
```c
100000: hundred thousand			// Error?
-->
_000: thousand
1_00_000: one hundred thousand		// 000: thousand; show(100, " ", 000); ????
```
```c
1000000: million					// Error?
-->
_000000: million
1_000000: one million				// 000000: million; show(1, " ", 000000); ????
```
```c
10000000: ten million				// Ok
-->
_000000: million
10_000000: ten million				// 000000: million; show(10, " ", 000000); ????
```
```c
100000000: hundred million			// Error?
-->
_000000: million
1_00_000000: one hundred million	// 000000: million; show(100, " ", 000000); ????
```
```c
1000000000: billion					// Error?
-->
_000000000: billion
1_000000000: one billion			// 000000000: billion; show(1, " ", 000000000);
```

---
## Parsing

```c
if ((input > 1000) && (input < 1000000))
	show((input / 1000), " ", 1000);
```
```c
999999999: nine hundred ninety nine million nine hundred ninety nine thousand nine hundred ninety nine
4294967295: four billion two hundred ninety four million nine hundred sixty seven thousand two hundred ninety five

if ((input => 1000000000) && (input <= 4294967295))			// UINT_MAX = 4294967295;
{
	if ((input => 1000000) && (input < 1000000000))
	{
		if ((input => 1000) && (input < 1000000))
		{
			if ((input => 100) && (input < 1000))
			{
				if ((input > 90) && (input < 100))
				{
					show(input - input[1], " ", input[1]);	// "ninety %s"
				}
				else if (input == 90)
				{
					show(input);							// "ninety"
				}
				show(input[0], " ", _00);					// "%s hundred"
			}
			show(input[0], " ", _000);						// "%s thousand"
		}
		show(input[0], " ", _000000);						// "%s million"
	}	
	show(input[0], " ", _000000000);						// "%s billion"
}
else
{
	show("Error\n");
}
```
```c
while ((input => 90) && (input < 100))
{
	if (input == 90)
	{
		show(input);										// "ninety"
	}
	else
	{
		show(input - input[1], " ", input[1]);				// "ninety %s"
	}
}
while ((input => 80) && (input < 90))
{
	if (input == 80)
	{
		show(input);										// "eighty"
	}
	else
	{
		show(input - input[1], " ", input[1]);				// "eighty %s"
	}
}
```
