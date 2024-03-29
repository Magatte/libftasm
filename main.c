#include "libfts.h"

/* TEST FT_BZERO */
int		launch_bzero(char *str, int n)
{
	char	*s1;
	char	*s2;

	s1 = strdup(str);
	s2 = strdup(str);
	ft_bzero(s1, n);
	bzero(s2, n);
	if (memcmp(s1, s2, 10) == 0)
		return (1);
	else
		return (0);
}

void	test_bzero(int *flag)
{
	int		nb;
	char	*tab[] = {"123456789", "", "123"};
	int		tab2[] = {3, 0, 4};

	printf("\n\033[33m------- Test FT_BZERO -------\033[00m\n");
	nb = 0;
	while (nb < 3)
	{
		printf("\033[94mTest number %d with \"%s\" and %d :\033[00m ", (nb + 1), tab[nb], tab2[nb]);
		if (launch_bzero(tab[nb], tab2[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_STRCAT */
int		launch_strcat(char *str, char *str2)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = strdup(str);
	s2 = strdup(str);
	s3 = strdup(str2);
	s4 = strdup(str2);
	ft_strcat(s1, s3);
	strcat(s2, s4);
	if (strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}

void	test_strcat(int *flag)
{
	int		nb;
	char	*tab[] = {"123456", "Bonj", "", "Bonjour", ""};
	char	*tab2[] = {"789", "our", "Salut", "", ""};

	printf("\n\033[33m------- Test FT_STRCAT -------\033[00m\n");
	nb = 0;
	while (nb < 5)
	{
		printf("\033[94mTest number %d with \"%s\" and \"%s\" :\033[00m ", (nb + 1), tab[nb], tab2[nb]);
		if (launch_strcat(tab[nb], tab2[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISALPHA */
int		launch_isalpha(int c)
{
	if (ft_isalpha(c) == isalpha(c))
		return (1);
	else
		return (0);
}

void	test_isalpha(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 48, 65, 91, 97, 123, 129};

	printf("\n\033[33m------- Test FT_ISALPHA -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isalpha(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISDIGIT */
int		launch_isdigit(int c)
{
	if (ft_isdigit(c) == isdigit(c))
		return (1);
	else
		return (0);
}

void	test_isdigit(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISDIGIT -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isdigit(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISALNUM */
int		launch_isalnum(int c)
{
	if (ft_isalnum(c) == isalnum(c))
		return (1);
	else
		return (0);
}

void	test_isalnum(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISALNUM -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isalnum(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISASCII */
int		launch_isascii(int c)
{
	if (ft_isascii(c) == isascii(c))
		return (1);
	else
		return (0);
}

void	test_isascii(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISASCII -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isascii(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISPRINT */
int		launch_isprint(int c)
{
	if (ft_isprint(c) == isprint(c))
		return (1);
	else
		return (0);
}

void	test_isprint(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISPRINT -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isprint(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_TOLOWER */
int		launch_tolower(int c)
{
	if (ft_tolower(c) == tolower(c))
		return (1);
	else
		return (0);
}

void	test_tolower(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_TOLOWER -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_tolower(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_TOUPPER */
int		launch_toupper(int c)
{
	if (ft_toupper(c) == toupper(c))
		return (1);
	else
		return (0);
}

void	test_toupper(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_TOUPPER -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_toupper(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_PUTS */
void	launch_puts(char *str)
{
	write(1, "\033[92mft_puts : \033[00m", 15);
	ft_puts(str);
	write(1, "\033[91mputs : \033[00m", 12);
	puts(str);
}

void	test_puts()
{
	int		nb;
	int		i;
	int		j;	
	char	*tab[] = {"Hello World !", "Coucou", NULL, "123456789"};

	printf("\n\033[33m------- Test FT_PUTS -------\033[00m\n");
	nb = 0;
	while (nb < 4)
	{
		printf("\033[94mTest number %d with \"%s\" :\033[00m\n", (nb + 1), tab[nb]);
		launch_puts(tab[nb]);
		nb++;
	}
	printf("\033[94mTest number %d with \"Bonjour\" and we close STDOUT :\033[00m\n", (nb + 1));
	close(1);
	i = ft_puts("Bonjour");
	j = puts("Bonjour");
	dup2(0, 1);
	printf("\033[92mft_puts return : %d\033[00m\n\033[91mputs return : %d\033[00m\n", i, j);
}

/* TEST FT_STRLEN */
int		launch_strlen(char *str)
{
	if (!str)
	{
		if (ft_strlen(str) == 0)
			return (1);
	}
	if (ft_strlen(str) == strlen(str))
		return (1);
	else
		return (0);
}

void	test_strlen(int *flag)
{
	int		nb;
	char	*tab[] = {"Hello World !", "Coucou", "123456789", NULL};

	printf("\n\033[33m------- Test FT_STRLEN -------\033[00m\n");
	nb = 0;
	while (nb < 4)
	{
		printf("\033[94mTest number %d with \"%s\" : \033[00m", (nb + 1), tab[nb]);
		if (launch_strlen(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_MEMSET */
int		launch_memset(char *str, int c, int n)
{
	char	*s1;
	char	*s2;

	s1 = strdup(str);
	s2 = strdup(str);
	ft_memset(s1, c, n);
	memset(s2, c, n);
	if (memcmp(s1, s2, 10) == 0)
		return (1);
	else
		return (0);
}

void	test_memset(int *flag)
{
	int		nb;
	char	*tab[] = {"Hello World !", "Coucou", "123456789", "Bonjour", ""};
	char	tab2[] = {'a', 'B', ' ', 'X', 0};
	int		tab3[] = {5, 7, 0, 0, 5};

	printf("\n\033[33m------- Test FT_MEMSET -------\033[00m\n");
	nb = 0;
	while (nb < 5)
	{
		printf("\033[94mTest number %d with \"%s\", '%c' and %d :\033[00m ", (nb + 1), tab[nb], tab2[nb], tab3[nb]);
		if (launch_memset(tab[nb], tab2[nb], tab3[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_MEMCPY */
int		launch_memcpy(char *str, char *str2, int n)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = strdup(str);
	s2 = strdup(str);
	s3 = strdup(str2);
	s4 = strdup(str2);
	ft_memcpy(s1, s3, n);
	memcpy(s2, s4, n);
	if (memcmp(s1, s2, 10) == 0)
		return (1);
	else
		return (0);
}

void	test_memcpy(int *flag)
{
	int		nb;
	char	*tab[] = {"Hello World !", "Coucou", "123456789", ""};
	char	*tab2[] = {"Salut Monde ?", "Salut.", "abcdefghi", ""};
	int		tab3[] = {6, 3, 5, 2};

	printf("\n\033[33m------- Test FT_MEMCPY -------\033[00m\n");
	nb = 0;
	while (nb < 4)
	{
		printf("\033[94mTest number %d with \"%s\", \"%s\" and %d :\033[00m ", (nb + 1), tab[nb], tab2[nb], tab3[nb]);
		if (launch_memcpy(tab[nb], tab2[nb], tab3[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_STRDUP */
int		launch_strdup(char *str)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup(str);
	s2 = strdup(str);

	if (strcmp(s1, s2) == 0)
	{
		free(s1);
		free(s2);
		return (1);
	}
	else
	{
		free(s1);
		free(s2);
		return (0);
	}
}

void	ft_putstr(char *str)
{
	write(1, str, strlen(str));
}

void	test_strdup(int *flag)
{
	int		nb;
	char	*tab[] = {"Hello World !", "Coucou", "", "123456789"};

	printf("\n\033[33m------- Test FT_STRDUP -------\033[00m\n");
	nb = 0;
	while (nb < 4)
	{
		printf("\033[94mTest number %d with \"%s\" :\033[00m ", (nb + 1), tab[nb]);
		if (launch_strdup(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_CAT */
void	launch_cat(int fd)
{
	ft_cat(fd);
}

void	test_cat()
{
	int		nb;
	int		fd;
	char	file[2048];

	printf("\n\033[33m------- Test FT_CAT -------\033[00m\n");
	nb = 0;
	printf("\033[94mTest number %d with fd = 0 :\033[00m \nEnter a text and \"Control + D\" to do the other tests : \n", (nb + 1));
	launch_cat(0);
	nb++;
	printf("\n\n\033[94mTest number %d when fd = 0 is close :\033[00m \nEnter a text and \"Control + D\" to do the other tests : \n", (nb + 1));
	close(0);
	launch_cat(0);
	nb++;
	dup2(1, 0);
	printf("\n\033[96mEnter a file to test or \"None\" to open the \"Makefile\" : \033[00m\n");
	scanf("%s", file);
	if (strcmp(file, "None") == 0)
		fd = open("Makefile", O_RDONLY);
	else
		fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		printf("\n\033[35mError to open %s.\033[00m\n", file);
		return ;
	}
	printf("\033[94mTest number %d with fd = %d :\033[00m \n", (nb + 1), fd);
	launch_cat(fd);
	close(fd);
	printf("\n");
	nb++;
}

/* TEST FT_ISLOWER */
int		launch_islower(int c)
{
	if (ft_islower(c) == islower(c))
		return (1);
	else
		return (0);
}

void	test_islower(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISLOWER -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_islower(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_ISUPPER */
int		launch_isupper(int c)
{
	if (ft_isupper(c) == isupper(c))
		return (1);
	else
		return (0);
}

void	test_isupper(int *flag)
{
	int		nb;
	int		tab[] = {-1, 0, 32, 51, 69, 94, 101, 124, 128};

	printf("\n\033[33m------- Test FT_ISUPPER -------\033[00m\n");
	nb = 0;
	while (nb < 9)
	{
		if (tab[nb] < 0)
			printf("\033[94mTest number %d with < 0   :\033[00m ", (nb + 1));
		else if (tab[nb] > 127)
			printf("\033[94mTest number %d with >127  :\033[00m ", (nb + 1));			
		else if (tab[nb] == 0)
			printf("\033[94mTest number %d with NULL  :\033[00m ", (nb + 1));
		else
			printf("\033[94mTest number %d with '%c'   :\033[00m ", (nb + 1), tab[nb]);
		if (launch_isupper(tab[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

int		launch_swap(int *a, int *b)
{
	int		y;
	int		z;

	y = *a;
	z = *b;
	ft_swap(a, b);
	if (*b == y && *a == z)
		return (1);
	else
		return (0);
}

/* TEST FT_SWAP */
void	test_swap(int *flag)
{
	int 	nb;
	int		taba[] = {0, 32, 51, 69, 94, 101, 124, 128};
	int		tabb[] = {128, 124, 101, 94, 69, 51, 32, 0};

	printf("\n\033[33m------- Test FT_SWAP -------\033[00m\n");
	nb = 0;
	while (nb < 8)
	{
		printf("\033[94mTest number %d with a = '%d' and b = '%d'  :\033[00m ", (nb + 1), taba[nb], tabb[nb]);
		if (launch_swap(&taba[nb], &tabb[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_STRCPY */
int		launch_strcpy(char *str, char *str2)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = strdup(str);
	s2 = strdup(str);
	s3 = strdup(str2);
	s4 = strdup(str2);
	ft_strcpy(s1, s3);
	strcpy(s2, s4);
	if (strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}

void	test_strcpy(int *flag)
{
	int		nb;
	char	*tab[] = {"Hello World !", "Coucou", "123456789", ""};
	char	*tab2[] = {"Salut Monde ?", "Salut.", "abcdefghi", ""};

	printf("\n\033[33m------- Test FT_STRCPY -------\033[00m\n");
	nb = 0;
	while (nb < 4)
	{
		printf("\033[94mTest number %d with \"%s\", and \"%s\" :\033[00m ", (nb + 1), tab[nb], tab2[nb]);
		if (launch_strcpy(tab[nb], tab2[nb]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
		{
			(*flag)++;
			printf("\033[31mERROR\033[00m\n");
		}
		nb++;
	}
}

/* TEST FT_STRCHR */
int		launch_strchr(char *str, char *s1, char *s2, int c)
{
	s1 = NULL;
	s2 = NULL;
	s1 = strchr(str, c);
	s2 = ft_strchr(str, c);
	if (s1 == NULL || s1 == 0 || s2 == NULL || s2 == 0)
		return (0);
	if (strcmp(s1, s2) == 0)
	{
		return (1);
	}
	else
		return (0);
}

void	test_strchr(int *flag)
{
	char	*s1 = NULL;
	char	*s2 = NULL;
	int 	n;
	char	tab[55] = "Hello World !, Coucou, 123456789";
	char	tab3[4] = {'H', 'W', 'a', 'W'};

	(void)flag;
	printf("\n\033[33m------- Test FT_STRCHR -------\033[00m\n");
	n = 0;
	while (n < 4)
	{
		printf("\033[94mTest number %d with \"%s\", and \"%c\" :\033[00m ", (n + 1), tab, tab3[n]);
		if (launch_strchr(tab, s1, s2, tab3[n]) == 1)
			printf("\033[32mOK\033[00m\n");
		else
			printf("\033[32mOK BUT NOT FOUND\033[00m\n");
		n++;
	}
}

void	wait_enter()
{
	printf("\n\033[96mCheck the tests and press ENTER to do the others tests\033[00m");
	while (getchar() != '\n')
		;
}

int		main(int ac, char **av)
{
	int		flag;

	flag = 0;
	if (ac == 1 || strcmp(av[1], "part1") == 0)
	{
		test_bzero(&flag);
		wait_enter();
		test_strcat(&flag);
		wait_enter();
		test_isalpha(&flag);
		wait_enter();
		test_isdigit(&flag);
		wait_enter();
		test_isalnum(&flag);
		wait_enter();
		test_isascii(&flag);
		wait_enter();
		test_isprint(&flag);
		wait_enter();
		test_tolower(&flag);
		wait_enter();
		test_toupper(&flag);
		wait_enter();
		test_puts();
	}
	if (ac == 1 || strcmp(av[1], "part2") == 0)
	{
		if (ac == 1)
			wait_enter();
		test_strlen(&flag);
		wait_enter();
		test_memset(&flag);
		wait_enter();
		test_memcpy(&flag);
		wait_enter();
		test_strdup(&flag);
	}
	if (ac == 1 || strcmp(av[1], "part3") == 0)
	{
		if (ac == 1)
			wait_enter();
		test_cat();
	}
	if (ac == 1 || strcmp(av[1], "bonus") == 0)
	{
		wait_enter();
		printf("\n");
		test_islower(&flag);
		wait_enter();
		test_isupper(&flag);
		wait_enter();
		test_swap(&flag);
		wait_enter();
		test_strcpy(&flag);
		wait_enter();
		test_strchr(&flag);
	}
	printf("\n\033[33m------- FINISH -------\033[00m\n");
	if (flag == 0)
		printf("\033[32mAll tests are good :D\033[00m\n");
	else
		printf("\033[31m%d tests failed :(\033[00m\n", flag);
	printf("\n");
	return (0);
}
