# C Tests 2022-08-15

### Create the default header

- On Emacs: `???`
- On Vim: `fn + f1`
- On VS Code: `⌘ + ⌥ + H` | `Ctrl + Alt + H`

Install
[42 Header (Long)](https://marketplace.visualstudio.com/items?itemName=secondfry.42header-long)

### Test the formatting of your file.

Install
[norminette](https://github.com/42School/norminette)

Install
[42 Norminette decorator for VSCode](https://marketplace.visualstudio.com/items?itemName=MariusvanWijk-JoppeKoers.codam-norminette-3)

```
norminette -R CheckForbiddenSourceHeader
```

### If you were asked for a **program**, you must include a `main()` function in your file.

```C
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('A');
	return (0);
}
```

### Compile your program file.

```
gcc -Wall -Werror -Wextra #program/{file-with-main-function}.c && ./a.out
```

### If you were asked for a **function**, remember to remove the `main()` function from your file before you commit.

```C
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
```

### This will fail saying: [undefined reference to 'main'], but that's ok because you already checked it works in the previous step.

```
gcc -Wall -Werror -Wextra #function/{file-without-main-function}.c && ./a.out
```
