#include "pzhelp"
PROGRAM {
bool palindrome= true;
char a[21];
char c;
int len=0;
int N=READ_INT();
int start, end;
int i=0;
float pososto=0.0;

SKIP_LINE();
FOR(i, 1 TO N) {
  len=0;
  while((c=getchar()) != '\n') {
    if (len<20) a[len]=c;
      len++;
      }

   if(len>20) {
     WRITELN("error");
     continue;
   }
   else if (len==0) {
     WRITELN("empty");
     continue;
   }
   else {
     a[len]='\0';
     end=len;
     start= -1;
     palindrome=true;
     while(start++<end--) {
       if(a[start] != a[end]) {
         palindrome= false;
         break;
       }
     }
   }
   if (palindrome) {
     WRITELN("yes");
     pososto+=1.0;
   }
   else
     WRITELN("no");
}
pososto= pososto/N * 100;
WRITELN(FORM(pososto,0, 3));
}
