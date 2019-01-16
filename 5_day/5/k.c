#include <stdio.h>
char    *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i = 0;
  while (str != '\0')
  {
    j = 0;
    while (to_find[j] == str [i + j])
    {
      if (to_find[j] != '\0')
        return (&str[i - j] );
      j++;
    }
    i++;
  }
  return (0);
}
int main() {
  char s1 [] = "This is www.firmcodes.com";
   
  printf ("Returned String 1: %s\n", ft_strstr(s1, "firmcodes"));
 
  return 0;
}
