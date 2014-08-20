#include <stdio.h>
#include <string.h>

int bf(char *t, char *p)
{
  int m,n,i,j;
  
  if (NULL==t || NULL==p)
    return -1;
  m=strlen(t);
  n=strlen(p);
  i=0;
  while(i<m-n)
  {
    j=0;
    while(t[i]==p[j] && j<n)
    {
      j++;
      i++;
    }
    if(j==n)
      return i-n;
    else
      i=i-j+1;
  }
  return -1;
}


int main(int argc, char *argv[])
{
  char a[]="abcdeabcdfg";
  char b[]="de";
  printf("Text: %s\n", a);
  printf("Pattern: %s\n", b);
  printf("Offset: %d\n", bf(a,b));
  return 0;
}
