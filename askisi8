#include <stdio.h>

int main () {
  int N,M;
  int i,j;

  int array[100][100];
  int row[100];
  int column[100];

  int maxc;
  int minr;

  scanf("%d %d", &N, &M);
  for(i=0; i<N; i++ ) {
    for(j=0; j<M; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  for (j=0; j<M; j++) {
    maxc=array[0][j];
    for (i=0; i<N; i++) {
      if ( maxc < array[i][j])
        maxc=array[i][j];
    }
    column[j]=maxc;
  }

  for(i=0; i<N; i++) {
    minr=array[i][0];
    for(j=0; j<M; j++) {
      if (minr>array[i][j])
        minr=array[i][j];
  }
  row[i]=minr;
}

maxc=column[0];
for(j=0; j<M; j++) {
if (maxc>column[j])
  maxc=column[j];
}
printf ("%d\n", maxc);

minr=row[0];
for(i=0; i<N; i++) {
if (minr<row[i])
  minr=row[i];
}
printf ("%d\n", minr);

return 0;

}
