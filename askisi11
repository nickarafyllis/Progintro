#include <cstdio>
#include <iostream>
using namespace std;

int a[150][150];
int i,j;
int N;
int aths[150],athg[150],athd1,athd2;
int s;
int r,t;
int freq[22499]={0};


void diavasma () {
  for(i=0; i<N; i++) {     //diavasma pinaka
    for(j=0; j<N; j++) {
      scanf("%d", &a[i][j]);
      freq[a[i][j]]+=1;
    }
  }
}

void athroismata(){
  r=0;                     //ypologismos athroismaton grammon kai stylon
  for(j=0; j<N; j++) {
    s=0; t=0;
    for(i=0; i<N; i++) {
      s+=a[i][j];
      t+=a[j][i];
    }

    aths[r]=s;
    athg[r]=t;
    r++;
  }

}

void diagonioi(){
  athd1=0; athd2=0;       //ypologismos athroismaton diagonion
  for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
      if(i==j) {
        athd1+=a[i][j];}
      if((i+j)==(N-1))
        athd2+=a[i][j];
    }
  }
}

int main(){
  scanf("%d",&N);
  diavasma();
  diagonioi();
  if(athd1==athd2) {
    athroismata();
    for(i=0; i<N; i++) {
      if((aths[i]!= athd1) || (athg[i]!=athd1)) {
        printf("no\n");
        return 0;
      }
      for(int p=0; p<((N*N)-1); p++)
       if(freq[p]!=1) {
        printf("no\n");
        return 0;
       }
    }
   printf("yes\n");
   return 0;
  }
  else {printf("no\n");}

return 0;
}
