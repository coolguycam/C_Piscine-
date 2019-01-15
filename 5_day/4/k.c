#include <stdio.h>
char        *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
int main() {
  
  char str1[5] = "helo";
  char str2[7] = "kejksd";
  printf("%s\n", str1);
  printf("%s\n", str2);
  
  printf("%s\n", ft_strncpy(str1, str2, 4));
  return 0;
}
