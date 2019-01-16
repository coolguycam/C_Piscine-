#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
        int i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = src[i];
        return (dest);
}
int main() {
  
  char str1[5] = "helo";
  char str2[5] = "keta";
  printf("%s\n", str1);
  printf("%s\n", str2);
  
  printf("%s\n", ft_strcpy(str1, str2));
  return 0;
}
