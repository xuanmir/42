/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_spaces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:51:59 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 17:57:48 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	index = 0;
	if (to_find == "")
		return (str);
	while (str[index])
	{
		while (cond)
		{
			while (cond)
			{
			}
		}
	}
	return (str);
}

/*
STRSTR(3)                   Library Functions Manual                   STRSTR(3)

NAME
     strstr, strcasestr, strnstr – locate a substring in a string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     char *
     strstr(const char *haystack, const char *needle);

     char *
     strcasestr(const char *haystack, const char *needle);

     char *
     strnstr(const char *haystack, const char *needle, size_t len);

     #include <string.h>
     #include <xlocale.h>

     char *
     strcasestr_l(const char *haystack, const char *needle, locale_t loc);

DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated
     string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of
     both strings.

     The strnstr() function locates the first occurrence of the null-terminated
     string needle in the string haystack, where not more than len characters
     are searched.  Characters that appear after a ‘\0’ character are not
     searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

     While the strcasestr() function uses the current locale, the strcasestr_l()
     function may be passed a locale directly. See xlocale(3) for more
     information.

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.

EXAMPLES
     The following sets the pointer ptr to the "Bar Baz" portion of largestring:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strstr(largestring, smallstring);

     The following sets the pointer ptr to NULL, because only the first 4
     characters of largestring are searched:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strnstr(largestring, smallstring, 4);

SEE ALSO
     memchr(3), memmem(3), strchr(3), strcspn(3), strpbrk(3), strrchr(3),
     strsep(3), strspn(3), strtok(3), wcsstr(3), xlocale(3)

STANDARDS
     The strstr() function conforms to ISO/IEC 9899:1990 (“ISO C90”).

macOS 12.5                      October 11, 2001                      macOS 12.5
(END)
*/
