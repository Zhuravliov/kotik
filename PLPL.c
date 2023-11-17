#include <stdio.h>
#include <stdlib.h>

const char *encode_cd(unsigned char n)
{
  char bit;
  char *pl=(char*) malloc(sizeof(char)*10);
  pl[0]='P';
  pl[9]='\0';
  for (size_t i=0;i<=7;i++)
  {
    if(n%2)
    {
      bit=1;
    }
    else
    {
      bit=0;
    }
    n/=2;
    if(bit==0)
    {
      pl[i+1]=pl[i];
    }
    else if(pl[i]=='P')
    {
      pl[i+1]='L';
    }
    else
    {
      pl[i+1]='P';
    }
  }
  return &pl[0];
}
