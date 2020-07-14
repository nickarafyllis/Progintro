#include "pzhelp"
#include <iostream>
#include <cstring>
using namespace std;

void justify(char array[],int k, int d, int s) {
  int a=s/d;
  int b=d-(s%d);
  int dwritten=0;
  for(int i=0; i<k; i++) {
    WRITE(array[i]);
    if(array[i]==' ') {
      dwritten++;
      for(int j=0; j<a; j++) {
        WRITE(" ");
      }
      if(dwritten>b)
        WRITE(" ");
    }
  }
  WRITELN();
}

int main() {
  int k, diakena, spaces;
  char line[61],word[21];
  int lwc=0;
  int c;
  int i=0;
  int j=-1;
  c=getchar();

  while(c!=EOF) {
    if(c!=' ' && c!='\n') {
      word[i++]=c;
    }
    else if(i!=0) {
      if(j+i<60) {
        for(k=0; k<i; k++)
          line[++j]=word[k];

          line[++j]=' ';
          lwc++;
      }
      else{
        diakena=lwc-1;
        spaces=60-j;
        justify(line, j, diakena, spaces);
        
        
        j=-1;
        lwc=1;
        k=0;
        while(k<1)
          line[++j]=word[k++];

        line[++j]=' ';
      }
      i=0;
    }
    c=getchar();
  }
  for(k=0; k<j; k++)
    WRITE(line[k]);

  WRITELN();
}

