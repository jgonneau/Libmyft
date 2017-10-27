/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		start;
	int		i;
	int		n;
	char		**tab;

	i = 0;
	start = -1;
	n = -1;
	tab = malloc(sizeof(char*) * ft_nb_words_str(s, c));
	while (s[i])
	{
		if (s[i] != c && start == -1)
		{
			start = i;
		}
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			n++;
			tab[n] = ft_strsub(s, start, i - start + 1);
			start = -1;
		}
		i++;
	}
	return (tab);
}
