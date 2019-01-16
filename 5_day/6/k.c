#include <stdio.h>

int        ft_strcmp(char *s1, char *s2)
{
    while (s1 == s2 && s1 != '\0')
    {
        s1++;
        s2++;
    }
    return ((s1 > s2) - (s1 < s2));
}

int main() {
  
  char str1[5] = "helo";
  char str2[7] = "ketauy";
  printf("%s\n", str1);
  printf("%s\n", str2);
  
  printf("%d\n", ft_strcmp(str1, str2));
  return 0;
}
