#include "pzhelp"
#include "cmath"

PROGRAM {
  int i,j;
  int a,b,c,d,e,f,g,h;
  int n[10], dek[10];
  int N=READ_INT();
  int num, allo;

  dek[0]=1;
  FOR(i,1 TO 8)
    dek[i]=pow(10,i);

  n[0]=0;
    FOR(j,1 TO 9)
    n[j]=pow(j,N);

  FOR(a, 0 TO 9)
    FOR(b, 0 TO 9)
      FOR(c, 0 TO 9)
        FOR(d,  0 TO 9)
          FOR(e, 0 TO 9)
            FOR(f, 0 TO 9)
              FOR(g, 0 TO 9)
                FOR(h, 0 TO 9) {

                  num=(h*dek[0]+g*dek[1]+f*dek[2]+e*dek[3]+d*dek[4]+c*dek[5]+b*dek[6]+a*dek[7]);

                  allo = (n[a]+n[b]+n[c]+n[d]+n[e]+n[f]+n[g]+n[h]);

                  if(num == allo) {
                     WRITELN(num);
                  }
                  else continue;
                }
}

