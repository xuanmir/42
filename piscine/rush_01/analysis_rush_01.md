# rush_01
The Skyscraper Problem

### Step 1 - Check input length

Input must be a 31 character string
``` C
if (strlen() = 31)
	{continue}
else
	printf("Error\n");
```

### Step 2 - Remove whitespace

Remove whitespace and store output into a 16 character string

### Step 3 - Check if the values are within the expected range

All remaining characters must be digits between 1 and 4
``` C
while (1 <= c && c <= 4)
```

Otherwise:
``` C
printf("Error\n");
```

### Step 4 - Create data structures for result

We can store our whole result into a 16 integer (or character ???) array
```
int	array[16] ==>
[ 0][ 1][ 2][ 3]
[ 4][ 5][ 6][ 7]
[ 8][ 9][10][11]
[12][13][14][15]
```
``` C
int	array[16];
int	col1up[4];
int	col2up[4];
int	col3up[4];
int	col4up[4];
int	col1down[4];
int	col2down[4];
int	col3down[4];
int	col4down[4];
int	row1left[4];
int	row2left[4];
int	row3left[4];
int	row4left[4];
int	row1right[4];
int	row2right[4];
int	row3right[4];
int	row4right[4];

col1up[] = array[0, 4, 8, 12];
col2up[] = array[1, 5, 9, 13];
col3up[] = array[2, 6, 10, 14];
col4up[] = array[3, 7, 11, 15];
col1down[] = reverse(col1up[]);
col2down[] = reverse(col2up[]);
col3down[] = reverse(col3up[]);
col4down[] = reverse(col4up[]);
row1left[] = array[0, 1, 2, 3];
row2left[] = array[4, 5, 6, 7];
row3left[] = array[8, 9, 10, 11];
row4left[] = array[12, 13, 14, 15];
row1right[] = reverse(row1left[]);
row2right[] = reverse(row2left[]);
row3right[] = reverse(row3left[]);
row4right[] = reverse(row4left[]);
```

### Step 5 - Shift the digits

If each 4 digit array starts with an initial value of `1 2 3 4`, when we add `n` (the input quantity), all the digits should shift by that number of spaces.

Examples:
``` C
col1up[] = "1 2 3 4";
_input = 1;
_output = "4 1 2 3";
```
``` C
col1up[] = "1 2 3 4";
_input = 2;
_output = "3 4 1 2";
```
``` C
col1up[] = "1 2 3 4";
_input = 3;
_output = "2 3 4 1";
```
``` C
col1up[] = "1 2 3 4";
_input = 4;
_output = "1 2 3 4";
```

Maybe something like this ???
``` C
int	n;
int	shift;

shift = *ptr + n;
```

### Step 6 - Print the result

We must remember to add one space between each digit and print the final value of:

```C
printf(row1left[]);
printf("\n");
printf(row2left[]);
printf("\n");
printf(row3left[]);
printf("\n");
printf(row4left[]);
printf("\n");
```

### Questions

The subject document says = `Given a map of 4x4, place boxes of height 1 to 4 on each available square in a way
that every row and column sees the correct number of boxes from each the possible
points of view (left/right for rows, up/down for columns).`

Does this mean we don't need to check the right-to-left and down-to-up views ?
