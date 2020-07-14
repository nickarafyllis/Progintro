#include "pzhelp"

FUNC int  gcd(int x,int y) {
  x=abs(x); y=abs(y);
while(x>0 AND y>0)
  if(x>y)
    x= x%y;
  else
    y=y%x;
return(x+y);
}

PROGRAM {
  int N;
  int a,b,c,d;
  char symbol;
  int i;
  int mkd;
  i=0;
  int pre1,pre2;
  int first;
  N=READ_INT();
  do {
    i++;
    SKIP_LINE();
    symbol = getchar();
    a=READ_INT(); b=READ_INT(); c=READ_INT(); d=READ_INT();
    if(b==0 OR d==0 OR (symbol=='/' AND c==0))WRITELN("error");
    else { switch(symbol){
      case '+':pre1=(a*d+c*b); pre2=b*d; break;
      case '-':pre1=(a*d-c*b); pre2=b*d; break;
      case '*':pre1=a*c;     pre2=b*d; break;
      case '/': pre1=a*d;  pre2=b*c; break;
    }
first=pre1/pre2;
mkd= gcd(pre1, pre2);
pre2=pre2/mkd;
pre1=(pre1/mkd - pre2*first);

if (first==0 AND ((pre1>0 AND pre2<0) OR (pre1<0 AND pre2>0)))
  WRITELN (("-0"), abs(pre1), abs(pre2));
      else
      WRITELN(first, abs(pre1), abs(pre2));
}}while(i<N);
}

