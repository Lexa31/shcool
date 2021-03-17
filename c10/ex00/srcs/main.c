#include <stdio.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
int     ft_strcmp(char *s1, char *s2);
int	    ft_strlen(char *str);


int main()
{
    char a[] = "hello";
	char b[] = "happy";
    int d = 2;
	int c = 20;

	ft_putchar('6');
	ft_putstr(a);
	ft_strcmp(a, b);
	printf("%d\n", ft_strlen(a));
	ft_swap(&d, &c);
	printf("%d - %d\n", d, c);
}