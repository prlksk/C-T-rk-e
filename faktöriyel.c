//for ve while ile fakt�riyel hesap�
#include<stdio.h>
int main()
{ 
  //de�i�kenleri tan�mlayal�m
  int n,s,f=1;
  //n de�erini okuyal�m
  printf("n:"); scanf("%d",&n);
  
  //for ile
  for(s=1;s<=n;s++)
  f=f*s;
  //sonucu yazal�m
  printf("for ile %d!=%d \n",n,f);
  
  //while ile
  s=1; f=1;
  while(s<=n)
  {  
    f=f*s;
    s++;
  }
  //sonucu yazal�m
  printf("while ile %d!=%d",n,f);
  
  return 0;
}

  
