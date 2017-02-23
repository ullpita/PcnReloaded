int ft_strcmp(char *s1, char *s2)
{
  while (*s1)
  {
    if (*s2 == '\0')
      return(1);
    if (*s1 == *s2)
      {
        s1++;
        s2++;
      }
    if (*s1 + 1 == '\0' && *s2 + 1 != '\0')
      return(-1);
  }
  return(0);
}
