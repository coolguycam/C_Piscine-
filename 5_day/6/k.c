#include <stdio.h>

int        ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1)
    {
        while (s1[i] == s2[i] && s1[i] != '\0')
        {
            s1++;
            s2++;
            i++;
        }
        if (s1[i] != s2[i])
            return ((s1 > s2) - (s1 < s2));
        else
            return (0);
    }
}

int main() {
  char str1[5] = "helo";
  char str2[5] = "helo";
  printf("%s\n", str1);
  printf("%s\n", str2);
  
  printf("%d\n", ft_strcmp(str1, str2));
  return (0);
}
