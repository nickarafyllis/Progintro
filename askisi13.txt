#include <cstdio>
#include <iostream>
using namespace std;

int main () {
  int cipher[26]={0};
  int decipher[26]={0};
  int c;
  int exactlyonce[26]={0};
  int i;
  char command;

  i=0;
  while((c=getchar())!='\n' && i<26) {
    if (c<'a' || c>'z') {
      break;
    }
    cipher[i]=c;
    exactlyonce[c-'a']+=1;
    decipher[c-'a']='a'+i;
    i+=1;
  }

  for ( i=0; i<26; i++) {
    if (exactlyonce[i] !=1) {
      printf("error\n");
      return 0;
    }
  }

  command=getchar();
  while((c=getchar())!=EOF && c!='\n')
  ;
    if(command=='d') {
      while((c=getchar())!=EOF) {
        if(c>='a' && c<='z') {
          putchar(decipher[c-'a']);
        }
        else if(c>='A' && c<='Z') {
          putchar(decipher[c-'A']-32);
        }
        else
          putchar(c);
      }
    }
    else {
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
  }
  return 0;
}
