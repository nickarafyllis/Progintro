#include "pzhelp"  
#include <iostream>  
#include <cstdio>  
using namespace std ;  
class list{  
  public:  
    list();  
    bool empty();  
    int size();  
    void add(int k , int x);  
    int get(int k);  
    void remove(int k);  
    int searchMF(int x);  
  private :  
    struct node{  
      int info ;  
      node *next;  
    };  
    node *head;  
};  
list::list(){  
  head=nullptr;  
}  
bool list::empty(){  
  return head==nullptr;  
}  
int list::size(){  
  node *p;  
  int counter=0;  
  p=head;  
  while(p!=nullptr){  
    counter++;  
    p=p->next;  
  }  
  return counter ;  
}  
void list::add(int k , int x){  
  int i ;  
  node *p, *q;  
  q=head;  
  for(i=1; i<(k-1); i++){  
    if(q==nullptr){  
      q=new node ;  
      q->next=nullptr;  
      head=q;  
    }  
    q=q->next;  
  }  
  p=new node;  
  p->info=x;  
  if(k==1){  
    head=p;  
    p->next=q;  
  }  
  else {  
    p->next=q->next;  
    q->next=p;  
  }  
}  
int list::get(int k ){  
  node *t;  
  int i ;  
  t=head;  
  for(i=1; i<k; i++)  
    t=t->next;  
  return t->info ;  
}  
void list::remove(int k ) {  
  int i ;  
  node *p,*n;  
  p=head;  
  for(i=1; i<(k-1); i++)  
    p=p->next;  
  if(k==1){  
    head=p->next;  
    delete p;  
  }  
  else {  
    n=p->next;  
    p->next=n->next;  
    delete n;  
  }  
} int list::searchMF(int x){  
  int k=2;  
  node *p,*q ;  
  p=head;  
  if(p->info==x)  
    return 1;  
  q=p->next;  
  while(q!=nullptr){  
    if(q->info!=x){  
      p=p->next;  
      q=p->next;  
      k++;  
    }  
    else {  
      p->next=q->next;  
      q->next=head;  
      head=q;  
      return k;  
    }  
    }  
  return 0;  
}  
int main(){  
  list l;  
  int N,M,kN,x,X,sum=0;  
  cin >> N;  
  for(int i=0; i<N; i++) {  
    cin>>kN;  
cin >>x;  
l.add(kN,x);}  
  cin>>M;  
  for(int j=0; j<M; j++){  
    cin>>X;  
    sum+=l.searchMF(X);  
  }  
  cout<<sum<<endl;  
}
