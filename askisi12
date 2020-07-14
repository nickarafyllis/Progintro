#include <cstdio>
#include <iostream>
using namespace std;

int main () {
  int cipher[26]={0};
  int c;
  int exactlyonce[26]={0};
  int i;

  i=0;
  while((c=getchar())!='\n' && i<26) {
    if (c<'a' || c>'z') {
      break;
  }
  cipher[i++]=c;
  exactlyonce[c-'a']+=1;
  }

  for ( i=0; i<26; i++) {
    if (exactlyonce[i] !=1) {
      printf("error\n");
      return 0;
    }
  }

  while ((c=getchar())!=EOF) {
    if (c>='a' && c<='z') {
      putchar(cipher[c-'a']);
    }
    else if (c>='A' && c<'Z') {
      putchar(cipher[c-'A']-32);
    }
    else
      putchar(c);
  }
  return 0;
}
