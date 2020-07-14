#include <stdio.h>
#include "pzhelp"
int main ()
{
  int N, M;
  int i, j;

  double array[100][100];
  double mos[100];
  double mog[100];

  double sums=0;
  double sumg=0;


  scanf ("%u %u", &N, &M);

  for (i = 0; i < N; i++)
    for (j = 0; j < M; j++) {
      scanf ("%lf", &array[i][j]);
    }


  for (j = 0; j < M; j++) {
    sums = 0;
    for (i = 0; i < N; i++)
        sums += array[i][j];


    mos[j]=(sums/N);
  }


  for (i = 0; i < N; i++) {
    sumg = 0 ;
    for (j = 0; j < M; j++)
      sumg += array[i][j];


    mog[i] = (sumg/M);
  }


  sums=0;
  for (i = 0; i < M; i++) {
    sums += mos[i];
  }
  sums=sums/M;
  WRITELN(FORM(sums,0,3));


  sumg=0;
  for (i = 0; i < N; i++) {
    sumg+=mog[i];
  }
  sumg=sumg/N;
  WRITELN(FORM(sumg,0,3));

  return 0;

}
